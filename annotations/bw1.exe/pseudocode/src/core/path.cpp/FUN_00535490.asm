; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00535490(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00533dc0 at 005344fc
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_005ec8dc
;   TerminatedCString s_queuePop_empty_queue_005ec8ed
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01e6be44
;   undefined4 DAT_01e6c16c
;   undefined4 DAT_01e6c170
;   undefined4 DAT_01e6c174
;   undefined4 DAT_01e6c178
;   undefined4 DAT_01e6c17c
;   undefined4 DAT_01e6c180
;   undefined4 DAT_01e6c184
;   undefined4 DAT_01e6c188
;   undefined4 DAT_01e6c18c
;   undefined4 DAT_01e6c190
;   ... and 12 more
;
; Called Functions:
;   FUN_005030e0
;   FUN_00533640
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535490
        ;   Label: FUN_00535490
    PUSH ESI                            ; 00535491
    PUSH EDI                            ; 00535492
    PUSH EBP                            ; 00535493
    SUB ESP,0x18                        ; 00535494
    MOV EBX,dword ptr [0x01e7abe0]      ; 00535497 | DAT_01e7abe0
    PUSH 0x2774                         ; 0053549d
    PUSH 0x0                            ; 005354a2
    PUSH 0x1e7abe8                      ; 005354a4
    MOV ESI,0x1                         ; 005354a9
    CALL FUN_005bfb70                   ; 005354ae
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV ECX,dword ptr [0x01e6c16c]      ; 005354b3 | DAT_01e6c16c
    MOV EBX,dword ptr [0x01e6c170]      ; 005354b9 | DAT_01e6c170
    ADD ESP,0xc                         ; 005354bf
    MOV dword ptr [0x01e7d35c],ESI      ; 005354c2 | DAT_01e7d35c
    XOR EDX,EDX                         ; 005354c8
    LEA EAX,[EBX*0x4 + 0x0]             ; 005354ca
    MOV dword ptr [0x01e7abdc],EDX      ; 005354d1 | DAT_01e7abdc
    SUB EAX,EBX                         ; 005354d7
    MOV dword ptr [ESP + 0x4],ESI       ; 005354d9
    SHL EAX,0x3                         ; 005354dd
    MOV dword ptr [0x01e6c17c],ECX      ; 005354e0 | DAT_01e6c17c
    ADD EAX,EBX                         ; 005354e6
    MOV DL,byte ptr [ESP + 0x4]         ; 005354e8
    MOV dword ptr [0x01e6c184],EBX      ; 005354ec | DAT_01e6c184
    MOV byte ptr [ECX + EAX*0x4 + 0x1e7abe8],DL ; 005354f2
    MOV EAX,dword ptr [ESP + 0x30]      ; 005354f9
    MOV EBX,ESI                         ; 005354fd
    MOV [0x01e6c180],EAX                ; 005354ff | DAT_01e6c180
    IMUL EAX,dword ptr [0x01e6c178],0x64 ; 00535504 | DAT_01e6c178
        ;   Label: LAB_00535504
    ADD EAX,dword ptr [0x01e6c174]      ; 0053550b | DAT_01e6c174
    CMP byte ptr [EAX + 0x1e7abe8],0x0  ; 00535511
    JNZ 0x00535649                      ; 00535518
        ;   XREF to: 00535649 (CONDITIONAL_JUMP)  ; LAB_00535649
    LEA ESI,[ESP + 0xc]                 ; 0053551e
    LEA EBP,[ESP + 0x10]                ; 00535522
    LEA EDI,[ESP + 0x8]                 ; 00535526
    MOV EAX,[0x01e7abdc]                ; 0053552a | DAT_01e7abdc
    MOV dword ptr [0x01e7abe0],EBX      ; 0053552f | DAT_01e7abe0
    CMP EAX,EBX                         ; 00535535
    JZ 0x00535650                       ; 00535537
        ;   XREF to: 00535650 (CONDITIONAL_JUMP)  ; LAB_00535650
    IMUL EAX,dword ptr [0x01e7abdc],0xc ; 0053553d | DAT_01e7abdc
        ;   Label: LAB_0053553d
    MOV EDX,dword ptr [EAX + 0x1e6c17c] ; 00535544 | DAT_01e6c17c | DAT_01e6c188
    MOV dword ptr [EDI],EDX             ; 0053554a
    MOV EDX,dword ptr [EAX + 0x1e6c180] ; 0053554c | DAT_01e6c180 | DAT_01e6c18c
    MOV ECX,dword ptr [0x01e7abdc]      ; 00535552 | DAT_01e7abdc
    MOV dword ptr [ESI],EDX             ; 00535558
    INC ECX                             ; 0053555a
    MOV EAX,dword ptr [EAX + 0x1e6c184] ; 0053555b | DAT_01e6c184 | DAT_01e6c190
    MOV dword ptr [0x01e7abdc],ECX      ; 00535561 | DAT_01e7abdc
    MOV dword ptr [EBP],EAX             ; 00535567
    CMP ECX,0x1388                      ; 0053556a
    JL 0x0053557a                       ; 00535570
        ;   XREF to: 0053557a (CONDITIONAL_JUMP)  ; LAB_0053557a
    XOR EDI,EDI                         ; 00535572
    MOV dword ptr [0x01e7abdc],EDI      ; 00535574 | DAT_01e7abdc
    MOV EBP,dword ptr [ESP + 0xc]       ; 0053557a
        ;   Label: LAB_0053557a
    PUSH EBP                            ; 0053557e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053557f
    PUSH EAX                            ; 00535583
    MOV EAX,dword ptr [ESP + 0x18]      ; 00535584
    INC EAX                             ; 00535588
    PUSH EAX                            ; 00535589
    MOV EDX,dword ptr [ESP + 0x38]      ; 0053558a
    PUSH EDX                            ; 0053558e
    CALL FUN_00533640                   ; 0053558f
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 00535594
    MOV EBP,EAX                         ; 00535597
    MOV ECX,dword ptr [ESP + 0xc]       ; 00535599
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053559d
    PUSH ECX                            ; 005355a1
    INC EAX                             ; 005355a2
    PUSH EAX                            ; 005355a3
    MOV ESI,dword ptr [ESP + 0x18]      ; 005355a4
    PUSH ESI                            ; 005355a8
    MOV EDI,dword ptr [ESP + 0x38]      ; 005355a9
    PUSH EDI                            ; 005355ad
    CALL FUN_00533640                   ; 005355ae
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 005355b3
    MOV EDI,EAX                         ; 005355b6
    MOV EAX,dword ptr [ESP + 0xc]       ; 005355b8
    PUSH EAX                            ; 005355bc
    MOV EDX,dword ptr [ESP + 0xc]       ; 005355bd
    MOV EAX,dword ptr [ESP + 0x14]      ; 005355c1
    PUSH EDX                            ; 005355c5
    DEC EAX                             ; 005355c6
    PUSH EAX                            ; 005355c7
    MOV ECX,dword ptr [ESP + 0x38]      ; 005355c8
    PUSH ECX                            ; 005355cc
    CALL FUN_00533640                   ; 005355cd
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    ADD ESP,0x10                        ; 005355d2
    MOV ESI,EAX                         ; 005355d5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005355d7
    PUSH EAX                            ; 005355db
    MOV EAX,dword ptr [ESP + 0xc]       ; 005355dc
    DEC EAX                             ; 005355e0
    PUSH EAX                            ; 005355e1
    MOV EDX,dword ptr [ESP + 0x18]      ; 005355e2
    PUSH EDX                            ; 005355e6
    MOV ECX,dword ptr [ESP + 0x38]      ; 005355e7
    PUSH ECX                            ; 005355eb
    CALL FUN_00533640                   ; 005355ec
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; undefined FUN_00533640()
    MOV EDX,dword ptr [0x01e6c16c]      ; 005355f1 | DAT_01e6c16c
    ADD ESP,0x10                        ; 005355f7
    MOV ECX,EAX                         ; 005355fa
    CMP EDX,dword ptr [ESP + 0x8]       ; 005355fc
    JZ 0x00535677                       ; 00535600
        ;   XREF to: 00535677 (CONDITIONAL_JUMP)  ; LAB_00535677
    MOV EAX,dword ptr [ESP + 0x8]       ; 00535602
        ;   Label: LAB_00535602
    CMP EAX,dword ptr [0x01e6c174]      ; 00535606 | DAT_01e6c174
    JZ 0x005358d5                       ; 0053560c
        ;   XREF to: 005358d5 (CONDITIONAL_JUMP)  ; LAB_005358d5
    MOV EAX,dword ptr [ESP + 0xc]       ; 00535612
        ;   Label: LAB_00535612
    MOV EDX,dword ptr [0x01e6be44]      ; 00535616 | DAT_01e6be44
    SUB EAX,EBP                         ; 0053561c
    CMP EAX,EDX                         ; 0053561e
    JL 0x005358ea                       ; 00535620
        ;   XREF to: 005358ea (CONDITIONAL_JUMP)  ; LAB_005358ea
    MOV EBX,dword ptr [0x01e7abe0]      ; 00535626 | DAT_01e7abe0
        ;   Label: LAB_00535626
    MOV EAX,[0x01e7abdc]                ; 0053562c | DAT_01e7abdc
    CMP EAX,EBX                         ; 00535631
    JNZ 0x00535504                      ; 00535633
        ;   XREF to: 00535504 (CONDITIONAL_JUMP)  ; LAB_00535504
    XOR EAX,EBX                         ; 00535639
    MOV dword ptr [0x01e7abe0],EBX      ; 0053563b | DAT_01e7abe0
        ;   Label: LAB_0053563b
    ADD ESP,0x18                        ; 00535641
    POP EBP                             ; 00535644
    POP EDI                             ; 00535645
    POP ESI                             ; 00535646
    POP EBX                             ; 00535647
    RET                                 ; 00535648
    MOV EAX,0x1                         ; 00535649
        ;   Label: LAB_00535649
    JMP 0x0053563b                      ; 0053564e
        ;   XREF to: 0053563b (UNCONDITIONAL_JUMP)  ; LAB_0053563b
    MOV ECX,0x5ec8dc                    ; 00535650 | = "..\\core\\path.cpp"
        ;   Label: LAB_00535650
    MOV EAX,0xdf                        ; 00535655
    PUSH 0x5ec8ed                       ; 0053565a | = "queuePop - empty queue?!"
    MOV dword ptr [0x01d1d400],ECX      ; 0053565f | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00535665 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0053566a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0053566f
    JMP 0x0053553d                      ; 00535672
        ;   XREF to: 0053553d (UNCONDITIONAL_JUMP)  ; LAB_0053553d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00535677
        ;   Label: LAB_00535677
    CMP EAX,dword ptr [0x01e6c170]      ; 0053567b | DAT_01e6c170
    JNZ 0x00535602                      ; 00535681
        ;   XREF to: 00535602 (CONDITIONAL_JUMP)  ; LAB_00535602
    MOV EAX,dword ptr [ESP + 0x10]      ; 00535687
        ;   Label: LAB_00535687
    CMP EAX,0x63                        ; 0053568b
    JGE 0x00535720                      ; 0053568e
        ;   XREF to: 00535720 (CONDITIONAL_JUMP)  ; LAB_00535720
    INC EAX                             ; 00535694
    IMUL EAX,EAX,0x64                   ; 00535695
    ADD EAX,dword ptr [ESP + 0x8]       ; 00535698
    CMP byte ptr [EAX + 0x1e7abe8],0x0  ; 0053569c
    JNZ 0x00535720                      ; 005356a3
        ;   XREF to: 00535720 (CONDITIONAL_JUMP)  ; LAB_00535720
    MOV EDX,dword ptr [ESP + 0xc]       ; 005356a9
    MOV EAX,EBP                         ; 005356ad
    SUB EAX,EDX                         ; 005356af
    CDQ                                 ; 005356b1
    XOR EAX,EDX                         ; 005356b2
    SUB EAX,EDX                         ; 005356b4
    CMP EAX,dword ptr [0x01e6be44]      ; 005356b6 | DAT_01e6be44
    JGE 0x00535720                      ; 005356bc
        ;   XREF to: 00535720 (CONDITIONAL_JUMP)  ; LAB_00535720
    MOV EAX,dword ptr [ESP + 0x10]      ; 005356be
    INC EAX                             ; 005356c2
    MOV dword ptr [ESP + 0x14],EAX      ; 005356c3
    IMUL EAX,EAX,0x64                   ; 005356c7
    ADD EAX,dword ptr [ESP + 0x8]       ; 005356ca
    MOV EDX,0x1                         ; 005356ce
    MOV EBX,dword ptr [0x01e7abe0]      ; 005356d3 | DAT_01e7abe0
    MOV byte ptr [EAX + 0x1e7abe8],DL   ; 005356d9
    IMUL EDX,EBX,0xc                    ; 005356df
    MOV EAX,dword ptr [ESP + 0x8]       ; 005356e2
    MOV dword ptr [EDX + 0x1e6c17c],EAX ; 005356e6 | DAT_01e6c188
    INC EBX                             ; 005356ec
    MOV dword ptr [EDX + 0x1e6c180],EBP ; 005356ed | DAT_01e6c18c
    MOV EAX,dword ptr [ESP + 0x14]      ; 005356f3
    MOV EBP,dword ptr [0x01e7d35c]      ; 005356f7 | DAT_01e7d35c
    MOV dword ptr [0x01e7abe0],EBX      ; 005356fd | DAT_01e7abe0
    INC EBP                             ; 00535703
    MOV dword ptr [EDX + 0x1e6c184],EAX ; 00535704 | DAT_01e6c190
    MOV dword ptr [0x01e7d35c],EBP      ; 0053570a | DAT_01e7d35c
    CMP EBX,0x1388                      ; 00535710
    JL 0x00535720                       ; 00535716
        ;   XREF to: 00535720 (CONDITIONAL_JUMP)  ; LAB_00535720
    XOR EBX,EBX                         ; 00535718
    MOV dword ptr [0x01e7abe0],EBX      ; 0053571a | DAT_01e7abe0
    CMP dword ptr [ESP + 0x8],0x63      ; 00535720
        ;   Label: LAB_00535720
    JGE 0x005357a7                      ; 00535725
        ;   XREF to: 005357a7 (CONDITIONAL_JUMP)  ; LAB_005357a7
    IMUL EAX,dword ptr [ESP + 0x10],0x64 ; 0053572b
    ADD EAX,dword ptr [ESP + 0x8]       ; 00535730
    CMP byte ptr [EAX + 0x1e7abe9],0x0  ; 00535734
    JNZ 0x005357a7                      ; 0053573b
        ;   XREF to: 005357a7 (CONDITIONAL_JUMP)  ; LAB_005357a7
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053573d
    MOV EAX,EDI                         ; 00535741
    SUB EAX,EDX                         ; 00535743
    CDQ                                 ; 00535745
    XOR EAX,EDX                         ; 00535746
    SUB EAX,EDX                         ; 00535748
    CMP EAX,dword ptr [0x01e6be44]      ; 0053574a | DAT_01e6be44
    JGE 0x005357a7                      ; 00535750
        ;   XREF to: 005357a7 (CONDITIONAL_JUMP)  ; LAB_005357a7
    MOV EBP,dword ptr [ESP + 0x10]      ; 00535752
    IMUL EBX,EBP,0x64                   ; 00535756
    MOV EAX,dword ptr [ESP + 0x8]       ; 00535759
    MOV EDX,0x3                         ; 0053575d
    MOV byte ptr [EBX + EAX*0x1 + 0x1e7abe9],DL ; 00535762
    MOV EBX,dword ptr [0x01e7abe0]      ; 00535769 | DAT_01e7abe0
    IMUL EDX,EBX,0xc                    ; 0053576f
    INC EAX                             ; 00535772
    MOV dword ptr [EDX + 0x1e6c17c],EAX ; 00535773 | DAT_01e6c194
    INC EBX                             ; 00535779
    MOV dword ptr [EDX + 0x1e6c180],EDI ; 0053577a | DAT_01e6c198
    MOV EAX,[0x01e7d35c]                ; 00535780 | DAT_01e7d35c
    MOV dword ptr [EDX + 0x1e6c184],EBP ; 00535785 | DAT_01e6c19c
    INC EAX                             ; 0053578b
    MOV dword ptr [0x01e7abe0],EBX      ; 0053578c | DAT_01e7abe0
    MOV [0x01e7d35c],EAX                ; 00535792 | DAT_01e7d35c
    CMP EBX,0x1388                      ; 00535797
    JL 0x005357a7                       ; 0053579d
        ;   XREF to: 005357a7 (CONDITIONAL_JUMP)  ; LAB_005357a7
    XOR EBX,EBX                         ; 0053579f
    MOV dword ptr [0x01e7abe0],EBX      ; 005357a1 | DAT_01e7abe0
    MOV EDX,dword ptr [ESP + 0x10]      ; 005357a7
        ;   Label: LAB_005357a7
    TEST EDX,EDX                        ; 005357ab
    JLE 0x00535835                      ; 005357ad
        ;   XREF to: 00535835 (CONDITIONAL_JUMP)  ; LAB_00535835
    LEA EAX,[EDX + -0x1]                ; 005357b3
    IMUL EAX,EAX,0x64                   ; 005357b6
    ADD EAX,dword ptr [ESP + 0x8]       ; 005357b9
    CMP byte ptr [EAX + 0x1e7abe8],0x0  ; 005357bd
    JNZ 0x00535835                      ; 005357c4
        ;   XREF to: 00535835 (CONDITIONAL_JUMP)  ; LAB_00535835
    MOV EBP,dword ptr [ESP + 0xc]       ; 005357c6
    MOV EAX,ESI                         ; 005357ca
    SUB EAX,EBP                         ; 005357cc
    CDQ                                 ; 005357ce
    XOR EAX,EDX                         ; 005357cf
    SUB EAX,EDX                         ; 005357d1
    CMP EAX,dword ptr [0x01e6be44]      ; 005357d3 | DAT_01e6be44
    JGE 0x00535835                      ; 005357d9
        ;   XREF to: 00535835 (CONDITIONAL_JUMP)  ; LAB_00535835
    MOV EDI,dword ptr [ESP + 0x10]      ; 005357db
    DEC EDI                             ; 005357df
    IMUL EDX,EDI,0x64                   ; 005357e0
    ADD EDX,dword ptr [ESP + 0x8]       ; 005357e3
    MOV EAX,0x2                         ; 005357e7
    MOV EBX,dword ptr [0x01e7abe0]      ; 005357ec | DAT_01e7abe0
    MOV byte ptr [EDX + 0x1e7abe8],AL   ; 005357f2
    IMUL EDX,EBX,0xc                    ; 005357f8
    MOV EAX,dword ptr [ESP + 0x8]       ; 005357fb
    MOV dword ptr [EDX + 0x1e6c17c],EAX ; 005357ff | DAT_01e6c1a0
    INC EBX                             ; 00535805
    MOV dword ptr [EDX + 0x1e6c180],ESI ; 00535806 | DAT_01e6c1a4
    MOV ESI,dword ptr [0x01e7d35c]      ; 0053580c | DAT_01e7d35c
    MOV dword ptr [EDX + 0x1e6c184],EDI ; 00535812 | DAT_01e6c1a8
    INC ESI                             ; 00535818
    MOV dword ptr [0x01e7abe0],EBX      ; 00535819 | DAT_01e7abe0
    MOV dword ptr [0x01e7d35c],ESI      ; 0053581f | DAT_01e7d35c
    CMP EBX,0x1388                      ; 00535825
    JL 0x00535835                       ; 0053582b
        ;   XREF to: 00535835 (CONDITIONAL_JUMP)  ; LAB_00535835
    XOR EBX,EBX                         ; 0053582d
    MOV dword ptr [0x01e7abe0],EBX      ; 0053582f | DAT_01e7abe0
    MOV EDI,dword ptr [ESP + 0x8]       ; 00535835
        ;   Label: LAB_00535835
    TEST EDI,EDI                        ; 00535839
    JLE 0x00535626                      ; 0053583b
        ;   XREF to: 00535626 (CONDITIONAL_JUMP)  ; LAB_00535626
    IMUL EAX,dword ptr [ESP + 0x10],0x64 ; 00535841
    ADD EAX,EDI                         ; 00535846
    CMP byte ptr [EAX + 0x1e7abe7],0x0  ; 00535848
    JNZ 0x00535626                      ; 0053584f
        ;   XREF to: 00535626 (CONDITIONAL_JUMP)  ; LAB_00535626
    MOV ESI,dword ptr [ESP + 0xc]       ; 00535855
    MOV EAX,ECX                         ; 00535859
    SUB EAX,ESI                         ; 0053585b
    CDQ                                 ; 0053585d
    XOR EAX,EDX                         ; 0053585e
    SUB EAX,EDX                         ; 00535860
    CMP EAX,dword ptr [0x01e6be44]      ; 00535862 | DAT_01e6be44
    JGE 0x00535626                      ; 00535868
        ;   XREF to: 00535626 (CONDITIONAL_JUMP)  ; LAB_00535626
    IMUL EDX,dword ptr [ESP + 0x10],0x64 ; 0053586e
    MOV dword ptr [ESP],0x4             ; 00535873
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053587a
    MOV BL,byte ptr [ESP]               ; 0053587e
    MOV byte ptr [EDX + EAX*0x1 + 0x1e7abe7],BL ; 00535881
    MOV EBX,dword ptr [0x01e7abe0]      ; 00535888 | DAT_01e7abe0
    IMUL EDX,EBX,0xc                    ; 0053588e
    MOV ESI,dword ptr [0x01e7d35c]      ; 00535891 | DAT_01e7d35c
    INC ESI                             ; 00535897
    DEC EAX                             ; 00535898
    MOV dword ptr [0x01e7d35c],ESI      ; 00535899 | DAT_01e7d35c
    MOV dword ptr [EDX + 0x1e6c17c],EAX ; 0053589f | DAT_01e6c1ac
    INC EBX                             ; 005358a5
    MOV dword ptr [EDX + 0x1e6c180],ECX ; 005358a6 | DAT_01e6c1b0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005358ac
    MOV dword ptr [0x01e7abe0],EBX      ; 005358b0 | DAT_01e7abe0
    MOV dword ptr [EDX + 0x1e6c184],EAX ; 005358b6 | DAT_01e6c1b4
    CMP EBX,0x1388                      ; 005358bc
    JL 0x00535626                       ; 005358c2
        ;   XREF to: 00535626 (CONDITIONAL_JUMP)  ; LAB_00535626
    XOR EBX,EBX                         ; 005358c8
    MOV dword ptr [0x01e7abe0],EBX      ; 005358ca | DAT_01e7abe0
    JMP 0x00535626                      ; 005358d0
        ;   XREF to: 00535626 (UNCONDITIONAL_JUMP)  ; LAB_00535626
    MOV EAX,dword ptr [ESP + 0x10]      ; 005358d5
        ;   Label: LAB_005358d5
    CMP EAX,dword ptr [0x01e6c178]      ; 005358d9 | DAT_01e6c178
    JNZ 0x00535612                      ; 005358df
        ;   XREF to: 00535612 (CONDITIONAL_JUMP)  ; LAB_00535612
    JMP 0x00535687                      ; 005358e5
        ;   XREF to: 00535687 (UNCONDITIONAL_JUMP)  ; LAB_00535687
    MOV EAX,dword ptr [ESP + 0xc]       ; 005358ea
        ;   Label: LAB_005358ea
    SUB EAX,ESI                         ; 005358ee
    CMP EAX,EDX                         ; 005358f0
    JGE 0x00535626                      ; 005358f2
        ;   XREF to: 00535626 (CONDITIONAL_JUMP)  ; LAB_00535626
    MOV EAX,dword ptr [ESP + 0xc]       ; 005358f8
    SUB EAX,EDI                         ; 005358fc
    CMP EAX,EDX                         ; 005358fe
    JGE 0x00535626                      ; 00535900
        ;   XREF to: 00535626 (CONDITIONAL_JUMP)  ; LAB_00535626
    MOV EAX,dword ptr [ESP + 0xc]       ; 00535906
    SUB EAX,ECX                         ; 0053590a
    CMP EAX,EDX                         ; 0053590c
    JGE 0x00535626                      ; 0053590e
        ;   XREF to: 00535626 (CONDITIONAL_JUMP)  ; LAB_00535626
    JMP 0x00535687                      ; 00535914
        ;   XREF to: 00535687 (UNCONDITIONAL_JUMP)  ; LAB_00535687

