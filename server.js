const express = require('express');
const app = express();
app.use(express.static(__dirname));

var messages = [
    {name: 'Tim', message: 'Hi'},
    {name: 'Bob', message: 'Hello'}
]

app.get('/messages', (request, response) => {
    response.send(messages);
})

var server = app.listen(8080,()=>{
    console.log("Server is listening on port", server.address().port);
});