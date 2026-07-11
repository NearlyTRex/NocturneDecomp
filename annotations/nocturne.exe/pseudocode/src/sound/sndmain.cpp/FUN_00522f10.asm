; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00522f10(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_005280c0 at 0052814a
;
; Referenced Globals:
;   undefined4 s_..\\sound\\sndmain.cpp_005927f5+1
;   string s_allocMixBuffers_-_out_of_memory_0059280b
;   undefined4 DAT_005bea68
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc8328
;   undefined4 DAT_02dc832c
;   undefined4 DAT_02dc8330
;   undefined4 DAT_02dc8334
;   undefined4 DAT_02dc8338
;   undefined4 DAT_02dc835c
;   undefined4 DAT_02dc8380
;
; Called Functions:
;   FUN_004c8440
;   FUN_00564a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522f10
        ;   Label: FUN_00522f10
    PUSH ESI                            ; 00522f11
    PUSH EBP                            ; 00522f12
    SUB ESP,0x10                        ; 00522f13
    MOV EAX,dword ptr [ESP + 0x20]      ; 00522f16
    MOV EDX,dword ptr [ESP + 0x24]      ; 00522f1a
    MOV EBX,0x1                         ; 00522f1e
    MOV dword ptr [0x02dc8334],EDX      ; 00522f23 | DAT_02dc8334
    CMP EAX,EBX                         ; 00522f29
    JLE 0x00522f40                      ; 00522f2b
        ;   XREF to: 00522f40 (CONDITIONAL_JUMP)  ; LAB_00522f40
    ADD EBX,EBX                         ; 00522f2d
        ;   Label: LAB_00522f2d
    CMP EBX,EAX                         ; 00522f2f
    JL 0x00522f2d                       ; 00522f31
        ;   XREF to: 00522f2d (CONDITIONAL_JUMP)  ; LAB_00522f2d
    LEA EAX,[EAX]                       ; 00522f33
    LEA EDX,[EDX]                       ; 00522f39
    NOP                                 ; 00522f3f
    MOV EAX,[0x02dc8334]                ; 00522f40 | DAT_02dc8334
        ;   Label: LAB_00522f40
    LEA ESI,[EBX*0x4 + 0x0]             ; 00522f45
    IMUL EAX,ESI                        ; 00522f4c
    IMUL EAX,dword ptr [0x005bea68]     ; 00522f4f | DAT_005bea68
    XOR EDX,EDX                         ; 00522f56
    PUSH EAX                            ; 00522f58
    MOV EBP,dword ptr [0x02dc835c]      ; 00522f59 | DAT_02dc835c
    MOV dword ptr [0x02dc8328],EDX      ; 00522f5f | DAT_02dc8328
    PUSH EBP                            ; 00522f65
    MOV dword ptr [0x02dc832c],EDX      ; 00522f66 | DAT_02dc832c
    MOV dword ptr [0x02dc8330],EBX      ; 00522f6c | DAT_02dc8330
    CALL FUN_00564a70                   ; 00522f72
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00564a70()
    MOV [0x02dc835c],EAX                ; 00522f77 | DAT_02dc835c
    MOV EAX,[0x005bea68]                ; 00522f7c | DAT_005bea68
    IMUL EAX,ESI                        ; 00522f81
    ADD ESP,0x8                         ; 00522f84
    ADD EAX,EAX                         ; 00522f87
    PUSH EAX                            ; 00522f89
    MOV EAX,[0x02dc8380]                ; 00522f8a | DAT_02dc8380
    PUSH EAX                            ; 00522f8f
    CALL FUN_00564a70                   ; 00522f90
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00564a70()
    IMUL ESI,dword ptr [0x005bea68]     ; 00522f95 | DAT_005bea68
    ADD ESP,0x8                         ; 00522f9c
    PUSH ESI                            ; 00522f9f
    MOV ECX,dword ptr [0x02dc8338]      ; 00522fa0 | DAT_02dc8338
    PUSH ECX                            ; 00522fa6
    MOV [0x02dc8380],EAX                ; 00522fa7 | DAT_02dc8380
    CALL FUN_00564a70                   ; 00522fac
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00564a70()
    MOV EBX,dword ptr [0x02dc8330]      ; 00522fb1 | DAT_02dc8330
    MOV ESI,dword ptr [0x02dc835c]      ; 00522fb7 | DAT_02dc835c
    ADD ESP,0x8                         ; 00522fbd
    MOV [0x02dc8338],EAX                ; 00522fc0 | DAT_02dc8338
    TEST ESI,ESI                        ; 00522fc5
    JNZ 0x005230a7                      ; 00522fc7
        ;   XREF to: 005230a7 (CONDITIONAL_JUMP)  ; LAB_005230a7
    MOV EBP,0x5927f6                    ; 00522fcd | s_..\sound\sndmain.cpp_005927f5+1
        ;   Label: LAB_00522fcd
    MOV EAX,0x4ac                       ; 00522fd2
    PUSH 0x59280b                       ; 00522fd7 | = "allocMixBuffers - out of memory"
    MOV dword ptr [0x01cc4800],EBP      ; 00522fdc | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 00522fe2 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00522fe7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00522fec
    MOV ECX,dword ptr [0x005bea68]      ; 00522fef | DAT_005bea68
        ;   Label: LAB_00522fef
    MOV EBX,dword ptr [0x02dc8330]      ; 00522ff5 | DAT_02dc8330
    XOR EDX,EDX                         ; 00522ffb
    TEST ECX,ECX                        ; 00522ffd
    JLE 0x0052309a                      ; 00522fff
        ;   XREF to: 0052309a (CONDITIONAL_JUMP)  ; LAB_0052309a
    PUSH EDI                            ; 00523005
    LEA EAX,[EBX*0x8 + 0x0]             ; 00523006
    IMUL ECX,EBX,0x0                    ; 0052300d
    MOV dword ptr [ESP + 0x10],EAX      ; 00523010
    MOV EDI,dword ptr [ESP + 0x10]      ; 00523014
    LEA EAX,[EBX*0x4 + 0x0]             ; 00523018
    MOV dword ptr [ESP + 0xc],EDI       ; 0052301f
    LEA ESI,[ECX + EAX*0x1]             ; 00523023
    MOV dword ptr [ESP + 0x8],EAX       ; 00523026
    MOV EDI,ECX                         ; 0052302a
    XOR EAX,EAX                         ; 0052302c
    MOV EBP,EBX                         ; 0052302e
        ;   Label: LAB_0052302e
    IMUL EBP,EDX                        ; 00523030
    IMUL EBP,dword ptr [0x02dc8334]     ; 00523033 | DAT_02dc8334
    SHL EBP,0x2                         ; 0052303a
    MOV dword ptr [ESP + 0x4],EBP       ; 0052303d
    MOV EBP,dword ptr [0x02dc835c]      ; 00523041 | DAT_02dc835c
    ADD EBP,dword ptr [ESP + 0x4]       ; 00523047
    MOV dword ptr [EAX + 0x2dc8360],EBP ; 0052304b
    MOV EBP,dword ptr [0x02dc8338]      ; 00523051 | DAT_02dc8338
    ADD EBP,ECX                         ; 00523057
    MOV dword ptr [EAX + 0x2dc833c],EBP ; 00523059
    MOV EBP,dword ptr [0x02dc8380]      ; 0052305f | DAT_02dc8380
    MOV dword ptr [ESP + 0x4],EBP       ; 00523065
    ADD EBP,EDI                         ; 00523069
    MOV dword ptr [EAX + 0x2dc8384],EBP ; 0052306b
    MOV EBP,dword ptr [ESP + 0x4]       ; 00523071
    ADD EBP,ESI                         ; 00523075
    MOV dword ptr [EAX + 0x2dc83a4],EBP ; 00523077
    ADD ESI,dword ptr [ESP + 0x10]      ; 0052307d
    ADD EDI,dword ptr [ESP + 0xc]       ; 00523081
    MOV EBP,dword ptr [ESP + 0x8]       ; 00523085
    INC EDX                             ; 00523089
    ADD ECX,EBP                         ; 0052308a
    MOV EBP,dword ptr [0x005bea68]      ; 0052308c | DAT_005bea68
    ADD EAX,0x4                         ; 00523092
    CMP EDX,EBP                         ; 00523095
    JL 0x0052302e                       ; 00523097
        ;   XREF to: 0052302e (CONDITIONAL_JUMP)  ; LAB_0052302e
    POP EDI                             ; 00523099
    MOV dword ptr [0x02dc8330],EBX      ; 0052309a | DAT_02dc8330
        ;   Label: LAB_0052309a
    ADD ESP,0x10                        ; 005230a0
    POP EBP                             ; 005230a3
    POP ESI                             ; 005230a4
    POP EBX                             ; 005230a5
    RET                                 ; 005230a6
    CMP dword ptr [0x02dc8380],0x0      ; 005230a7 | DAT_02dc8380
        ;   Label: LAB_005230a7
    JZ 0x00522fcd                       ; 005230ae
        ;   XREF to: 00522fcd (CONDITIONAL_JUMP)  ; LAB_00522fcd
    TEST EAX,EAX                        ; 005230b4
    JZ 0x00522fcd                       ; 005230b6
        ;   XREF to: 00522fcd (CONDITIONAL_JUMP)  ; LAB_00522fcd
    JMP 0x00522fef                      ; 005230bc
        ;   XREF to: 00522fef (UNCONDITIONAL_JUMP)  ; LAB_00522fef

