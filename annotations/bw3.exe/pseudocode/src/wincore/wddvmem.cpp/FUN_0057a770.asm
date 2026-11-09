; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_FUN_0057a770(void)
;
;
; XREF[2]:
;   engine_2d.c_FUN_00401010 at 0040106f
;   wincore_wddvmem.cpp_FUN_00579bb0 at 00579fa0
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005d76f6
;   TerminatedCString s_setpal_Unable_to_create_005d770d
;   TerminatedCString s_wincore_wddvmem_cpp_005d7736
;   TerminatedCString s_setpal_Unable_to_set_fro_005d774d
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf6058
;   undefined4 DAT_02d0bce0
;   undefined4 DAT_02d0bce4
;   undefined4 DAT_02d0bcec
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0
;   wincore_wddvmem.cpp_FUN_0057a5b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a770
        ;   Label: wincore_wddvmem.cpp_FUN_0057a770
    PUSH EDI                            ; 0057a771
    PUSH EBP                            ; 0057a772
    CMP dword ptr [0x01c6cee8],0x0      ; 0057a773 | DAT_01c6cee8
    JNZ 0x0057a860                      ; 0057a77a
        ;   XREF to: 0057a860 (CONDITIONAL_JUMP)  ; LAB_0057a860
    MOV ECX,dword ptr [0x02d0bcec]      ; 0057a780 | DAT_02d0bcec
    TEST ECX,ECX                        ; 0057a786
    JNZ 0x0057a87c                      ; 0057a788
        ;   XREF to: 0057a87c (CONDITIONAL_JUMP)  ; LAB_0057a87c
    CMP dword ptr [0x005fba20],0x8      ; 0057a78e | DAT_005fba20
        ;   Label: LAB_0057a78e
    JNZ 0x0057a853                      ; 0057a795
        ;   XREF to: 0057a853 (CONDITIONAL_JUMP)  ; LAB_0057a853
    XOR EDX,EDX                         ; 0057a79b
    XOR EAX,EAX                         ; 0057a79d
    ADD EAX,0x4                         ; 0057a79f
        ;   Label: LAB_0057a79f
    MOV BL,byte ptr [EDX + 0x1c6af98]   ; 0057a7a2 | DAT_01c6af98
    MOV byte ptr [EAX + 0x2d0bd14],BL   ; 0057a7a8
    MOV BL,byte ptr [EDX + 0x1c6af99]   ; 0057a7ae | DAT_01c6af99
    MOV byte ptr [EAX + 0x2d0bd15],BL   ; 0057a7b4
    MOV BL,byte ptr [EDX + 0x1c6af9a]   ; 0057a7ba | DAT_01c6af9a
    MOV byte ptr [EAX + 0x2d0bd16],BL   ; 0057a7c0
    MOV BL,0x1                          ; 0057a7c6
    ADD EDX,0x3                         ; 0057a7c8
    MOV byte ptr [EAX + 0x2d0bd17],BL   ; 0057a7cb
    CMP EAX,0x400                       ; 0057a7d1
    JNZ 0x0057a79f                      ; 0057a7d6
        ;   XREF to: 0057a79f (CONDITIONAL_JUMP)  ; LAB_0057a79f
    PUSH 0x0                            ; 0057a7d8
    PUSH 0x2d0bcec                      ; 0057a7da | DAT_02d0bcec
    PUSH 0x2d0bd18                      ; 0057a7df
    MOV EAX,[0x02d0bce0]                ; 0057a7e4 | DAT_02d0bce0
    PUSH 0x4                            ; 0057a7e9
    MOV EDX,dword ptr [EAX]             ; 0057a7eb
    PUSH EAX                            ; 0057a7ed
    CALL dword ptr [EDX + 0x14]         ; 0057a7ee
    TEST EAX,EAX                        ; 0057a7f1
    JZ 0x0057a818                       ; 0057a7f3
        ;   XREF to: 0057a818 (CONDITIONAL_JUMP)  ; LAB_0057a818
    MOV EDI,0x5d76f6                    ; 0057a7f5 | = "..\\wincore\\wddvmem.cpp"
    MOV EBP,0x301                       ; 0057a7fa
    PUSH 0x5d770d                       ; 0057a7ff | = "setpal - Unable to create palette object"
    MOV dword ptr [0x01d71de0],EDI      ; 0057a804 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0057a80a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057a810
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0057a815
    MOV ECX,dword ptr [0x02d0bcec]      ; 0057a818 | DAT_02d0bcec
        ;   Label: LAB_0057a818
    MOV EAX,[0x02d0bce4]                ; 0057a81e | DAT_02d0bce4
    PUSH ECX                            ; 0057a823
    MOV EDX,dword ptr [EAX]             ; 0057a824
    PUSH EAX                            ; 0057a826
    CALL dword ptr [EDX + 0x7c]         ; 0057a827
    TEST EAX,EAX                        ; 0057a82a
    JZ 0x0057a853                       ; 0057a82c
        ;   XREF to: 0057a853 (CONDITIONAL_JUMP)  ; LAB_0057a853
    PUSH ESI                            ; 0057a82e
    MOV EBX,0x5d7736                    ; 0057a82f | = "..\\wincore\\wddvmem.cpp"
    MOV ESI,0x307                       ; 0057a834
    PUSH 0x5d774d                       ; 0057a839 | = "setpal - Unable to set front buffer p..."
    MOV dword ptr [0x01d71de0],EBX      ; 0057a83e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0057a844 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057a84a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0057a84f
    POP ESI                             ; 0057a852
    CMP dword ptr [0x005fba20],0x8      ; 0057a853 | DAT_005fba20
        ;   Label: LAB_0057a853
    JG 0x0057a88f                       ; 0057a85a
        ;   XREF to: 0057a88f (CONDITIONAL_JUMP)  ; LAB_0057a88f
    POP EBP                             ; 0057a85c
    POP EDI                             ; 0057a85d
    POP EBX                             ; 0057a85e
    RET                                 ; 0057a85f
    PUSH 0x1c6a070                      ; 0057a860
        ;   Label: LAB_0057a860
    PUSH 0x1c6af98                      ; 0057a865 | DAT_01c6af98
    CALL dword ptr [0x02cf6058]         ; 0057a86a | DAT_02cf6058
    ADD ESP,0x8                         ; 0057a870
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0 ; 0057a873
        ;   XREF to: 004d4eb0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0()
    POP EBP                             ; 0057a878
    POP EDI                             ; 0057a879
    POP EBX                             ; 0057a87a
    RET                                 ; 0057a87b
    PUSH ECX                            ; 0057a87c
        ;   Label: LAB_0057a87c
    MOV EDX,dword ptr [ECX]             ; 0057a87d
    XOR EBX,EBX                         ; 0057a87f
    CALL dword ptr [EDX + 0x8]          ; 0057a881
    MOV dword ptr [0x02d0bcec],EBX      ; 0057a884 | DAT_02d0bcec
    JMP 0x0057a78e                      ; 0057a88a
        ;   XREF to: 0057a78e (UNCONDITIONAL_JUMP)  ; LAB_0057a78e
    CALL wincore_wddvmem.cpp_FUN_0057a5b0 ; 0057a88f
        ;   XREF to: 0057a5b0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_0057a5b0()
        ;   Label: LAB_0057a88f
    POP EBP                             ; 0057a894
    POP EDI                             ; 0057a895
    POP EBX                             ; 0057a896
    RET                                 ; 0057a897

