const express = require("express");
const app = express();
const mongoose = require("mongoose")

const PORT = 5000;

app.get("/" , (req,res) => {
    res.send("backend is connected")
})

/* mongoose.connect("") */


app.listen(PORT , () => {
    console.log("server is listening at port 5000")
})