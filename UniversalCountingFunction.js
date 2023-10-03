function ucf_javascript(n, i_range) {
    return i_range.map(i => i * n);
}

const i_values = Array.from({length: 11}, (_, i) => i);
console.log(ucf_javascript(3, i_values));
