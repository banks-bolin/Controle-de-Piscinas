# Descrição
Atividade passada ao grupo de alunos da UniCesumar para prática básica de linguagem C e lógica de programação.

# Atividade

Foi construído um novo clube em sua cidade. Este clube possui 4 piscinas de profundidades diferentes:

* Piscina com 40cm de profundidade, onde apenas crianças menores de 7 anos e seus responsáveis (maior de 18 anos) podem frequentar.
* Piscina com profundidade de 1,50m, onde apenas pessoas a partir de 7 anos podem acessar.
* Piscina com profundidade de 2,50m, onde apenas adultos podem frequentar
* E uma piscina de 3m de profundidade, onde apenas os atletas do clube podem acessar.

Com o grande fluxo de pessoas, este parque está sentindo a necessidade de um controle melhor de seus frequentadores evitando que as pessoas incorretas acessem as piscinas. Você foi contratado para desenvolver um software em linguagem C que ajude o clube neste controle.

O software precisa apresentar um menu para o usuário com as seguintes opções:

1. Cadastrar cliente
2. Buscar cadastro de cliente
3. Editar cadastro de cliente
4. Listar todos os clientes cadastrados
5. Listar clientes por piscina permitida
6. Listar apenas clietes atletas
7. Excluir cliente cadastrado
8. Sair do sistema

Todo cliente precisa possuir um Nome completo, CPF, idade, Endereço, matrícula e informar se é um atleta ou não.

### Exigências:
* A matrícula deve ser um número de 7 dígitos gerados de forma aleatória no momento em que o cliente é cadastrado
* Cada item do menu deve ser processado por uma subrotina
* Ao utilizar strings, deve ser atendar para evitar que ocorrer Buffer Overflow
* O sistema só pode ser encerrado quando o usuário escolher a opção 8 do menu
* O sistema deve comportar no máximo 200 clientes cadastrados. Se passar desta quantidade, não pode permitir que o usuário cadastre, retornando pra ele um alerta.
* A exclusão, edição ou busca de um cliente cadastrado no sistema deve ser realizada por CPF ou Matrícula.

### Etapa final: Validação de dados
* O código não pode permitir que sejam inseridas informações em branco nos campos de cadastro do cliente
* O código não deve aceitar caracteres que não sejam numéricos no CPF e deve exigir que o CPF possua 11 digitos
* O códdigo deve validar se aquele CPF informado é um CPF válido
* O desenvolvedor deve garantir que evitou buffer overflow nos vetores

# Etapas corrigidas com os alunos

- [ ] Levantamento de Requisitos
- [ ] Fluxograma do projeto
- [ ] Organização das metodologias ágeis e separação das sprints por equipes
- [ ] Estruturação do código base
- [ ]  Desenvolvimento das subrotinas
- [ ] Teste
- [ ] Implantação de validação de dados
