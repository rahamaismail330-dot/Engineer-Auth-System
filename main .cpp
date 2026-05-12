 <!DOCTYPE html>
<html lang="ar">
<head>
    <meta charset="UTF-8">
    <title>Engineer Auth System</title>
    <style>
        body { background-color: #0d1117; color: white; font-family: sans-serif; display: flex; align-items: center; justify-content: center; height: 100vh; margin: 0; }
        .card { background: #161b22; padding: 40px; border-radius: 15px; text-align: center; border: 1px solid #30363d; }
        button { background: #238636; color: white; border: none; padding: 10px 20px; border-radius: 5px; cursor: pointer; font-size: 16px; }
    </style>
</head>
<body>

    <div class="card">
        <h1 style="color: #58a6ff;">Engineer Auth System</h1>
        <p>اضغط لبدء التسجيل (لديك 10 ثوانٍ فقط)</p>
        <button onclick="startProcess()">Start System</button>
        <div id="result" style="margin-top: 20px; white-space: pre-wrap;"></div>
    </div>

    <script>
        function startProcess() {
            // بداية الوقت
            let startTime = Date.now();

            // إدخال البيانات (بديل cin)
            let name = prompt("Enter your name:");
            let age = prompt("Enter your age:");

            // نهاية الوقت
            let endTime = Date.now();
            let timeTaken = Math.floor((endTime - startTime) / 1000);

            let resultDiv = document.getElementById("result");
            let output = "--- Result ---\nTime taken: " + timeTaken + " seconds\n";

            // منطقك الخاص بالـ 10 ثوانٍ والعمر
            if (timeTaken > 10) {
                output += "You were too slow!";
            } else {
                if (parseInt(age) >= 20) {
                    output += "hello eng : " + name;
                } else {
                    output += "go out please " + name;
                }
            }

            resultDiv.innerText = output;
        }
    </script>

</body>
</html>
