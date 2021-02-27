def mutate_string(string, position, character):
    aux = list(string)
    aux[position] = character
    return "".join(aux)
