public class Desafio {
    public static void main(String[] args) {
      
      Integer xp = 10000;
      String nome_heroi = "Arthur";
  
      if(xp > 10000){
        mensagem(nome_heroi, "Radiante");
      } else if(xp > 9000) {
        mensagem(nome_heroi, "Imortal");
      } else if(xp > 8000) {
        mensagem(nome_heroi, "Ascendente");
      } else if(xp > 7000) {
        mensagem(nome_heroi, "Platina");
      } else if(xp > 5000) {
        mensagem(nome_heroi, "Ouro");
      } else if(xp > 2000) {
        mensagem(nome_heroi, "Prata");
      } else if(xp > 1000) {
        mensagem(nome_heroi, "Bronze");
      } else {
        mensagem(nome_heroi, "Ferro");
      }
      
    }
    public static void mensagem(String nome,String rank){
      System.out.printf("O Herói de nome %s está no nível de %s",nome,rank);
    }
  }
  