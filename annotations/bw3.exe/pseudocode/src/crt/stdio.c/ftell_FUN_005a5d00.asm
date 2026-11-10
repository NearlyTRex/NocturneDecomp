; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_ftell_FUN_005a5d00(int param_1)
;
;
; XREF[9]:
;   core_fldnotes.cpp_FUN_004aa810 at 004aa8cf
;   core_game.cpp_FUN_004bdfb0 at 004be164
;   core_script.cpp_CScript_dbLoad_FUN_00530610 at 00530676
;   core_script.cpp_FUN_00529410 at 005294de
;   crt_stdio.c_fclose_FUN_005a3bc0 at 005a3c04
;   sound_mp3.cpp_FUN_004fd3c0 at 004fd3f2
;   sound_mp3.cpp_FUN_00502890 at 005028ef
;   support_newmsg.cpp_readMessageFile_FUN_005084c0 at 00508515
;   support_trstream.cpp_FUN_00574960 at 00574972
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005aa380
;   crt_unknown.c_FUN_005accf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5d00
        ;   Label: crt_stdio.c_ftell_FUN_005a5d00
    PUSH ESI                            ; 005a5d01
    PUSH EDI                            ; 005a5d02
    PUSH EBP                            ; 005a5d03
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a5d04
    TEST byte ptr [EBX + 0xc],0x80      ; 005a5d08
    JZ 0x005a5d1d                       ; 005a5d0c
        ;   XREF to: 005a5d1d (CONDITIONAL_JUMP)  ; LAB_005a5d1d
    TEST byte ptr [EBX + 0xd],0x10      ; 005a5d0e
    JZ 0x005a5d1d                       ; 005a5d12
        ;   XREF to: 005a5d1d (CONDITIONAL_JUMP)  ; LAB_005a5d1d
    PUSH EBX                            ; 005a5d14
    CALL crt_unknown.c_FUN_005accf0     ; 005a5d15
        ;   XREF to: 005accf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005accf0()
    ADD ESP,0x4                         ; 005a5d1a
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a5d1d
        ;   Label: LAB_005a5d1d
    PUSH EDX                            ; 005a5d20
    CALL crt_unknown.c_FUN_005aa380     ; 005a5d21
        ;   XREF to: 005aa380 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa380()
    MOV ESI,EAX                         ; 005a5d26
    ADD ESP,0x4                         ; 005a5d28
    MOV EDI,EAX                         ; 005a5d2b
    CMP EAX,-0x1                        ; 005a5d2d
    JZ 0x005a5d60                       ; 005a5d30
        ;   XREF to: 005a5d60 (CONDITIONAL_JUMP)  ; LAB_005a5d60
    MOV ECX,dword ptr [EBX + 0x10]      ; 005a5d32
    PUSH ECX                            ; 005a5d35
    CALL dword ptr [0x006079a4]         ; 005a5d36 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    MOV EBP,dword ptr [EBX + 0x4]       ; 005a5d3c
    ADD ESP,0x4                         ; 005a5d3f
    TEST EBP,EBP                        ; 005a5d42
    JZ 0x005a5d53                       ; 005a5d44
        ;   XREF to: 005a5d53 (CONDITIONAL_JUMP)  ; LAB_005a5d53
    TEST byte ptr [EBX + 0xd],0x10      ; 005a5d46
    JZ 0x005a5d51                       ; 005a5d4a
        ;   XREF to: 005a5d51 (CONDITIONAL_JUMP)  ; LAB_005a5d51
    LEA EDI,[ESI + EBP*0x1]             ; 005a5d4c
    JMP 0x005a5d53                      ; 005a5d4f
        ;   XREF to: 005a5d53 (UNCONDITIONAL_JUMP)  ; LAB_005a5d53
    SUB EDI,EBP                         ; 005a5d51
        ;   Label: LAB_005a5d51
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a5d53
        ;   Label: LAB_005a5d53
    PUSH EDX                            ; 005a5d56
    CALL dword ptr [0x006079a8]         ; 005a5d57 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a5d5d
    MOV EAX,EDI                         ; 005a5d60
        ;   Label: LAB_005a5d60
    POP EBP                             ; 005a5d62
    POP EDI                             ; 005a5d63
    POP ESI                             ; 005a5d64
    POP EBX                             ; 005a5d65
    RET                                 ; 005a5d66

