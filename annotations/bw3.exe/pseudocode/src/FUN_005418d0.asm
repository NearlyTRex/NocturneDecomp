; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005418d0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00532b80 at 005334e4
;   FUN_00534420 at 005345f7
;
; Called Functions:
;   FUN_00541470
;   FUN_005419e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005418d0
        ;   Label: FUN_005418d0
    PUSH ESI                            ; 005418d1
    PUSH EDI                            ; 005418d2
    PUSH EBP                            ; 005418d3
    SUB ESP,0x18                        ; 005418d4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005418d7
    MOV EDX,dword ptr [EDI + 0x15b428]  ; 005418db
    XOR EAX,EAX                         ; 005418e1
    TEST EDX,EDX                        ; 005418e3
    JLE 0x00541910                      ; 005418e5
        ;   XREF to: 00541910 (CONDITIONAL_JUMP)  ; LAB_00541910
    MOV EBX,EDI                         ; 005418e7
    MOV dword ptr [EBX + 0x15b46c],0xffffffff ; 005418e9
        ;   Label: LAB_005418e9
    INC EAX                             ; 005418f3
    MOV ECX,dword ptr [EDI + 0x15b428]  ; 005418f4
    ADD EBX,0x44                        ; 005418fa
    CMP EAX,ECX                         ; 005418fd
    JL 0x005418e9                       ; 005418ff
        ;   XREF to: 005418e9 (CONDITIONAL_JUMP)  ; LAB_005418e9
    LEA EAX,[EAX]                       ; 00541901
    LEA EDX,[EDX]                       ; 00541907
    LEA EAX,[EAX]                       ; 0054190d
    XOR EBX,EBX                         ; 00541910
        ;   Label: LAB_00541910
    MOV ESI,dword ptr [EDI + 0x15b428]  ; 00541912
    MOV dword ptr [ESP + 0x4],EBX       ; 00541918
    TEST ESI,ESI                        ; 0054191c
    JLE 0x0054196a                      ; 0054191e
        ;   XREF to: 0054196a (CONDITIONAL_JUMP)  ; LAB_0054196a
    LEA EAX,[EDI + 0x15b42c]            ; 00541920
    MOV dword ptr [ESP],EBX             ; 00541926
    MOV dword ptr [ESP + 0xc],EAX       ; 00541929
    MOV EBX,dword ptr [ESP + 0x4]       ; 0054192d
        ;   Label: LAB_0054192d
    PUSH EBX                            ; 00541931
    PUSH EDI                            ; 00541932
    CALL FUN_005419e0                   ; 00541933
        ;   XREF to: 005419e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005419e0()
    INC EBX                             ; 00541938
    ADD ESP,0x8                         ; 00541939
    MOV ESI,dword ptr [EDI + 0x15b428]  ; 0054193c
    MOV dword ptr [ESP + 0x14],EAX      ; 00541942
    CMP EBX,ESI                         ; 00541946
    JL 0x00541972                       ; 00541948
        ;   XREF to: 00541972 (CONDITIONAL_JUMP)  ; LAB_00541972
    MOV EBP,dword ptr [ESP]             ; 0054194e
        ;   Label: LAB_0054194e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00541951
    MOV EDX,dword ptr [EDI + 0x15b428]  ; 00541955
    ADD EBP,0x44                        ; 0054195b
    INC EAX                             ; 0054195e
    MOV dword ptr [ESP],EBP             ; 0054195f
    MOV dword ptr [ESP + 0x4],EAX       ; 00541962
    CMP EAX,EDX                         ; 00541966
    JL 0x0054192d                       ; 00541968
        ;   XREF to: 0054192d (CONDITIONAL_JUMP)  ; LAB_0054192d
    ADD ESP,0x18                        ; 0054196a
        ;   Label: LAB_0054196a
    POP EBP                             ; 0054196d
    POP EDI                             ; 0054196e
    POP ESI                             ; 0054196f
    POP EBX                             ; 00541970
        ;   Label: LAB_00541970
    RET                                 ; 00541971
    IMUL ESI,EBX,0x44                   ; 00541972
        ;   Label: LAB_00541972
    MOV EAX,dword ptr [ESP]             ; 00541975
    MOV dword ptr [ESP + 0x8],EAX       ; 00541978
    ADD ESI,dword ptr [ESP + 0xc]       ; 0054197c
    JMP 0x0054199e                      ; 00541980
        ;   XREF to: 0054199e (UNCONDITIONAL_JUMP)  ; LAB_0054199e
    PUSH EBP                            ; 00541982
        ;   Label: LAB_00541982
    PUSH ESI                            ; 00541983
    CALL FUN_00541470                   ; 00541984
        ;   XREF to: 00541470 (UNCONDITIONAL_CALL)  ; undefined FUN_00541470()
    ADD ESP,0x8                         ; 00541989
    TEST EAX,EAX                        ; 0054198c
    JNZ 0x005419cc                      ; 0054198e
        ;   XREF to: 005419cc (CONDITIONAL_JUMP)  ; LAB_005419cc
    INC EBX                             ; 00541990
        ;   Label: LAB_00541990
    MOV EBP,dword ptr [EDI + 0x15b428]  ; 00541991
    ADD ESI,0x44                        ; 00541997
    CMP EBX,EBP                         ; 0054199a
    JGE 0x0054194e                      ; 0054199c
        ;   XREF to: 0054194e (CONDITIONAL_JUMP)  ; LAB_0054194e
    PUSH EBX                            ; 0054199e
        ;   Label: LAB_0054199e
    PUSH EDI                            ; 0054199f
    CALL FUN_005419e0                   ; 005419a0
        ;   XREF to: 005419e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005419e0()
    ADD ESP,0x8                         ; 005419a5
    MOV EDX,dword ptr [ESP + 0x14]      ; 005419a8
    MOV dword ptr [ESP + 0x10],EAX      ; 005419ac
    CMP EAX,EDX                         ; 005419b0
    JZ 0x00541990                       ; 005419b2
        ;   XREF to: 00541990 (CONDITIONAL_JUMP)  ; LAB_00541990
    MOV EBP,dword ptr [ESP + 0xc]       ; 005419b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005419b8
    PUSH ESI                            ; 005419bc
    ADD EBP,ECX                         ; 005419bd
    PUSH EBP                            ; 005419bf
    CALL FUN_00541470                   ; 005419c0
        ;   XREF to: 00541470 (UNCONDITIONAL_CALL)  ; undefined FUN_00541470()
    ADD ESP,0x8                         ; 005419c5
    TEST EAX,EAX                        ; 005419c8
    JZ 0x00541982                       ; 005419ca
        ;   XREF to: 00541982 (CONDITIONAL_JUMP)  ; LAB_00541982
    IMUL EAX,dword ptr [ESP + 0x10],0x44 ; 005419cc
        ;   Label: LAB_005419cc
    MOV EBP,dword ptr [ESP + 0x14]      ; 005419d1
    MOV dword ptr [EDI + EAX*0x1 + 0x15b46c],EBP ; 005419d5
    JMP 0x00541990                      ; 005419dc
        ;   XREF to: 00541990 (UNCONDITIONAL_JUMP)  ; LAB_00541990

