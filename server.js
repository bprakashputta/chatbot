const express = require('express');
const app = express();
app.use(express.static(__dirname));

var server = app.listen(8080,()=>{
    console.log("Server is listening on port", server.address().port);
});