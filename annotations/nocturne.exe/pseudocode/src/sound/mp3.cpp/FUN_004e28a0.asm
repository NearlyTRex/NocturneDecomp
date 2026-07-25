; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e28a0(int *param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0058b567
;   TerminatedCString s_Out_of_memory_File_s_0058b578
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01cd8b28
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fseek_FUN_0056582c
;   crt_stdio.c_ftell_FUN_00566e70
;   FUN_004c8440
;   FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e28a0
        ;   Label: FUN_004e28a0
    PUSH ESI                            ; 004e28a1
    PUSH EDI                            ; 004e28a2
    PUSH EBP                            ; 004e28a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e28a4
    MOV EDX,dword ptr [EBX]             ; 004e28a8
    MOV ESI,EBX                         ; 004e28aa
    TEST EDX,EDX                        ; 004e28ac
    JNZ 0x004e293a                      ; 004e28ae
        ;   XREF to: 004e293a (CONDITIONAL_JUMP)  ; LAB_004e293a
    MOV EDI,dword ptr [ESI + 0x4]       ; 004e28b4
        ;   Label: LAB_004e28b4
    TEST EDI,EDI                        ; 004e28b7
    JZ 0x004e28cb                       ; 004e28b9
        ;   XREF to: 004e28cb (CONDITIONAL_JUMP)  ; LAB_004e28cb
    PUSH EDI                            ; 004e28bb
    CALL FUN_005638d0                   ; 004e28bc
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 004e28c1
    MOV dword ptr [ESI + 0x4],0x0       ; 004e28c4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e28cb
        ;   Label: LAB_004e28cb
    PUSH EAX                            ; 004e28cf
    MOV dword ptr [EBX],EAX             ; 004e28d0
    CALL crt_stdio.c_ftell_FUN_00566e70 ; 004e28d2
        ;   XREF to: 00566e70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_00566e70()
    ADD ESP,0x4                         ; 004e28d7
    MOV dword ptr [EBX + 0x20],EAX      ; 004e28da
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e28dd
    MOV dword ptr [EBX + 0x24],EAX      ; 004e28e1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e28e4
    PUSH EAX                            ; 004e28e8
    MOV dword ptr [EBX + 0x8],EAX       ; 004e28e9
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004e28ec
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 004e28f1
    MOV dword ptr [EBX + 0x4],EAX       ; 004e28f4
    TEST EAX,EAX                        ; 004e28f7
    JZ 0x004e294e                       ; 004e28f9
        ;   XREF to: 004e294e (CONDITIONAL_JUMP)  ; LAB_004e294e
    PUSH 0x0                            ; 004e28fb
        ;   Label: LAB_004e28fb
    MOV EBP,dword ptr [EBX + 0x20]      ; 004e28fd
    PUSH EBP                            ; 004e2900
    MOV EAX,dword ptr [EBX]             ; 004e2901
    PUSH EAX                            ; 004e2903
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004e2904
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_0056582c()
    MOV dword ptr [EBX + 0x10],0x0      ; 004e2909
    MOV dword ptr [EBX + 0x14],0x0      ; 004e2910
    MOV dword ptr [EBX + 0xc],0x0       ; 004e2917
    MOV dword ptr [EBX + 0x18],0x0      ; 004e291e
    MOV dword ptr [EBX + 0x1c],0x0      ; 004e2925
    MOV EAX,dword ptr [EBX + 0x24]      ; 004e292c
    ADD ESP,0xc                         ; 004e292f
    MOV dword ptr [EBX + 0x28],EAX      ; 004e2932
    POP EBP                             ; 004e2935
    POP EDI                             ; 004e2936
    POP ESI                             ; 004e2937
    POP EBX                             ; 004e2938
    RET                                 ; 004e2939
    PUSH EDX                            ; 004e293a
        ;   Label: LAB_004e293a
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004e293b
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 004e2940
    MOV dword ptr [EBX],0x0             ; 004e2943
    JMP 0x004e28b4                      ; 004e2949
        ;   XREF to: 004e28b4 (UNCONDITIONAL_JUMP)  ; LAB_004e28b4
    PUSH 0x1cd8b28                      ; 004e294e | DAT_01cd8b28
        ;   Label: LAB_004e294e
    MOV ESI,0x58b567                    ; 004e2953 | = "..\\sound\\mp3.cpp"
    MOV EDI,0x1ff                       ; 004e2958
    PUSH 0x58b578                       ; 004e295d | = "Out of memory.  File: %s"
    MOV dword ptr [0x01cc4800],ESI      ; 004e2962 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004e2968 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004e296e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 004e2973
    JMP 0x004e28fb                      ; 004e2976
        ;   XREF to: 004e28fb (UNCONDITIONAL_JUMP)  ; LAB_004e28fb

