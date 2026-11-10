; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_ftell_FUN_005baab0(int param_1)
;
;
; XREF[10]:
;   core_fldnotes.cpp_FUN_004a41b0 at 004a4266
;   core_game.cpp_FUN_004bbf70 at 004bc103
;   core_script.cpp_CScript_dbLoad_FUN_00529c10 at 00529c76
;   core_script.cpp_FUN_00521cf0 at 00521dbe
;   crt_stdio.c_fclose_FUN_005b8af0 at 005b8b34
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_00519f00 at 0051a6a3
;   sound_mp3.cpp_FUN_005048e0 at 00504912
;   sound_mp3.cpp_FUN_00509db0 at 00509e0f
;   support_newmsg.cpp_readMessageFile_FUN_0050f9e0 at 0050fa35
;   support_trstream.cpp_FUN_0057dd20 at 0057dd32
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;
; Called Functions:
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005bf250
;   crt_unknown.c_FUN_005c1b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005baab0
        ;   Label: crt_stdio.c_ftell_FUN_005baab0
    PUSH ESI                            ; 005baab1
    PUSH EDI                            ; 005baab2
    PUSH EBP                            ; 005baab3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005baab4
    TEST byte ptr [EBX + 0xc],0x80      ; 005baab8
    JZ 0x005baacd                       ; 005baabc
        ;   XREF to: 005baacd (CONDITIONAL_JUMP)  ; LAB_005baacd
    TEST byte ptr [EBX + 0xd],0x10      ; 005baabe
    JZ 0x005baacd                       ; 005baac2
        ;   XREF to: 005baacd (CONDITIONAL_JUMP)  ; LAB_005baacd
    PUSH EBX                            ; 005baac4
    CALL crt_unknown.c_FUN_005c1b30     ; 005baac5
        ;   XREF to: 005c1b30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1b30()
    ADD ESP,0x4                         ; 005baaca
    MOV EDX,dword ptr [EBX + 0x10]      ; 005baacd
        ;   Label: LAB_005baacd
    PUSH EDX                            ; 005baad0
    CALL crt_unknown.c_FUN_005bf250     ; 005baad1
        ;   XREF to: 005bf250 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf250()
    MOV ESI,EAX                         ; 005baad6
    ADD ESP,0x4                         ; 005baad8
    MOV EDI,EAX                         ; 005baadb
    CMP EAX,-0x1                        ; 005baadd
    JZ 0x005bab10                       ; 005baae0
        ;   XREF to: 005bab10 (CONDITIONAL_JUMP)  ; LAB_005bab10
    MOV ECX,dword ptr [EBX + 0x10]      ; 005baae2
    PUSH ECX                            ; 005baae5
    CALL dword ptr [0x0061f2a8]         ; 005baae6 | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV EBP,dword ptr [EBX + 0x4]       ; 005baaec
    ADD ESP,0x4                         ; 005baaef
    TEST EBP,EBP                        ; 005baaf2
    JZ 0x005bab03                       ; 005baaf4
        ;   XREF to: 005bab03 (CONDITIONAL_JUMP)  ; LAB_005bab03
    TEST byte ptr [EBX + 0xd],0x10      ; 005baaf6
    JZ 0x005bab01                       ; 005baafa
        ;   XREF to: 005bab01 (CONDITIONAL_JUMP)  ; LAB_005bab01
    LEA EDI,[ESI + EBP*0x1]             ; 005baafc
    JMP 0x005bab03                      ; 005baaff
        ;   XREF to: 005bab03 (UNCONDITIONAL_JUMP)  ; LAB_005bab03
    SUB EDI,EBP                         ; 005bab01
        ;   Label: LAB_005bab01
    MOV EDX,dword ptr [EBX + 0x10]      ; 005bab03
        ;   Label: LAB_005bab03
    PUSH EDX                            ; 005bab06
    CALL dword ptr [0x0061f2ac]         ; 005bab07 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005bab0d
    MOV EAX,EDI                         ; 005bab10
        ;   Label: LAB_005bab10
    POP EBP                             ; 005bab12
    POP EDI                             ; 005bab13
    POP ESI                             ; 005bab14
    POP EBX                             ; 005bab15
    RET                                 ; 005bab16

