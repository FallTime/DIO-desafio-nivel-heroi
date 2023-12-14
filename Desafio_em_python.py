xp = 10001
nome_heroi = "Arthur"
def mensagem(nome, rank):
    print("O Herói de nome ", nome, " está no nível de", rank)

if xp > 10000 :
    mensagem(nome_heroi, "Radiante")
elif xp > 9000 :
    mensagem(nome_heroi, "Imortal")
elif xp > 8000 :
    mensagem(nome_heroi, "Ascendente")
elif xp > 7000 :
    mensagem(nome_heroi, "Platina")
elif xp > 5000 :
    mensagem(nome_heroi, "Ouro")
elif xp > 2000 :
    mensagem(nome_heroi, "Prata")
elif xp > 1000 :
    mensagem(nome_heroi, "Bronze")
else :
    mensagem(nome_heroi, "Ferro")
