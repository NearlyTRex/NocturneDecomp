; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_004e68c0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
; float            Stack[0xc]:4   delta_time
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_004e57f0 at 004e5817
;
; Referenced Globals:
;   undefined4 DAT_005f98c0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e68c0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004e68c0
    PUSH ESI                            ; 004e68c1
    PUSH EBP                            ; 004e68c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e68c3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e68c7
    LEA EAX,[ECX*0x4 + 0x0]             ; 004e68cb
    SUB EAX,ECX                         ; 004e68d2
    SHL EAX,0x3                         ; 004e68d4
    ADD EAX,ECX                         ; 004e68d7
    LEA EBX,[ESI + 0x74c]               ; 004e68d9
    SHL EAX,0x2                         ; 004e68df
    ADD EBX,EAX                         ; 004e68e2
    CMP dword ptr [EBX],0x0             ; 004e68e4
    JNZ 0x004e68f6                      ; 004e68e7
        ;   XREF to: 004e68f6 (CONDITIONAL_JUMP)  ; LAB_004e68f6
    CMP dword ptr [EBX],0x0             ; 004e68e9
        ;   Label: LAB_004e68e9
    JZ 0x004e6a3b                       ; 004e68ec
        ;   XREF to: 004e6a3b (CONDITIONAL_JUMP)  ; LAB_004e6a3b
    POP EBP                             ; 004e68f2
    POP ESI                             ; 004e68f3
    POP EBX                             ; 004e68f4
    RET                                 ; 004e68f5
    FLD float ptr [EBX + 0x8]           ; 004e68f6
        ;   Label: LAB_004e68f6
    FMUL float ptr [ESP + 0x18]         ; 004e68f9
    FDIV float ptr [0x005f98c0]         ; 004e68fd | DAT_005f98c0
    FADD float ptr [EBX + 0x4]          ; 004e6903
    FST float ptr [EBX + 0x4]           ; 004e6906
    FLDZ                                ; 004e6909
    FCOMPP                              ; 004e690b
    FNSTSW AX                           ; 004e690d
    SAHF                                ; 004e690f
    JBE 0x004e6920                      ; 004e6910
        ;   XREF to: 004e6920 (CONDITIONAL_JUMP)  ; LAB_004e6920
    MOV dword ptr [EBX + 0x8],0x0       ; 004e6912
    MOV dword ptr [EBX + 0x4],0x0       ; 004e6919
    FLD float ptr [EBX + 0x4]           ; 004e6920
        ;   Label: LAB_004e6920
    FLD1                                ; 004e6923
    FCOMPP                              ; 004e6925
    FNSTSW AX                           ; 004e6927
    SAHF                                ; 004e6929
    JA 0x004e68e9                       ; 004e692a
        ;   XREF to: 004e68e9 (CONDITIONAL_JUMP)  ; LAB_004e68e9
    PUSH EDI                            ; 004e692c
    PUSH ECX                            ; 004e692d
    PUSH ESI                            ; 004e692e
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560 ; 004e692f
        ;   XREF to: 004e7560 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560(CMansionPuzzleCircle * this_ptr, int panel_index)
    MOV EDX,EAX                         ; 004e6934
    SHL EAX,0x2                         ; 004e6936
    SUB EAX,EDX                         ; 004e6939
    SHL EAX,0x3                         ; 004e693b
    ADD EAX,EDX                         ; 004e693e
    ADD ESI,0x74c                       ; 004e6940
    SHL EAX,0x2                         ; 004e6946
    ADD ESI,EAX                         ; 004e6949
    MOV EDI,dword ptr [ESI]             ; 004e694b
    ADD ESP,0x8                         ; 004e694d
    TEST EDI,EDI                        ; 004e6950
    JZ 0x004e6976                       ; 004e6952
        ;   XREF to: 004e6976 (CONDITIONAL_JUMP)  ; LAB_004e6976
    MOV EBP,0x5dc535                    ; 004e6954
    MOV EAX,0x45d                       ; 004e6959
    PUSH 0x5dc548                       ; 004e695e
    MOV dword ptr [0x01d046a0],EBP      ; 004e6963 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004e6969 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004e696e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004e6973
    MOV EAX,ESI                         ; 004e6976
        ;   Label: LAB_004e6976
    MOV ECX,dword ptr [EBX]             ; 004e6978
    MOV EDX,EBX                         ; 004e697a
    MOV dword ptr [ESI],ECX             ; 004e697c
    LEA EDI,[EBX + 0xc]                 ; 004e697e
    FLD float ptr [EBX + 0x4]           ; 004e6981
    LEA ECX,[ESI + 0xc]                 ; 004e6984
    FSTP float ptr [ESI + 0x4]          ; 004e6987
    MOV EBP,dword ptr [EBX + 0x8]       ; 004e698a
    MOV dword ptr [ESI + 0x8],EBP       ; 004e698d
    CMP ECX,EDI                         ; 004e6990
    JZ 0x004e69a4                       ; 004e6992
        ;   XREF to: 004e69a4 (CONDITIONAL_JUMP)  ; LAB_004e69a4
    MOV EBP,dword ptr [EDI]             ; 004e6994
    MOV dword ptr [ECX],EBP             ; 004e6996
    MOV EBP,dword ptr [EDI + 0x4]       ; 004e6998
    MOV dword ptr [ECX + 0x4],EBP       ; 004e699b
    MOV EBP,dword ptr [EDI + 0x8]       ; 004e699e
    MOV dword ptr [ECX + 0x8],EBP       ; 004e69a1
    LEA ECX,[EDX + 0x18]                ; 004e69a4
        ;   Label: LAB_004e69a4
    LEA EDI,[EAX + 0x18]                ; 004e69a7
    CMP EDI,ECX                         ; 004e69aa
    JZ 0x004e69be                       ; 004e69ac
        ;   XREF to: 004e69be (CONDITIONAL_JUMP)  ; LAB_004e69be
    MOV EBP,dword ptr [ECX]             ; 004e69ae
    MOV dword ptr [EDI],EBP             ; 004e69b0
    MOV EBP,dword ptr [ECX + 0x4]       ; 004e69b2
    MOV dword ptr [EDI + 0x4],EBP       ; 004e69b5
    MOV EBP,dword ptr [ECX + 0x8]       ; 004e69b8
    MOV dword ptr [EDI + 0x8],EBP       ; 004e69bb
    MOV ECX,dword ptr [EDX + 0x24]      ; 004e69be
        ;   Label: LAB_004e69be
    MOV dword ptr [EAX + 0x24],ECX      ; 004e69c1
    MOV ECX,dword ptr [EDX + 0x28]      ; 004e69c4
    MOV dword ptr [EAX + 0x28],ECX      ; 004e69c7
    MOV ECX,dword ptr [EDX + 0x2c]      ; 004e69ca
    MOV dword ptr [EAX + 0x2c],ECX      ; 004e69cd
    MOV ECX,dword ptr [EDX + 0x30]      ; 004e69d0
    MOV dword ptr [EAX + 0x30],ECX      ; 004e69d3
    MOV ECX,dword ptr [EDX + 0x34]      ; 004e69d6
    MOV dword ptr [EAX + 0x34],ECX      ; 004e69d9
    MOV ECX,dword ptr [EDX + 0x38]      ; 004e69dc
    MOV dword ptr [EAX + 0x38],ECX      ; 004e69df
    MOV ECX,dword ptr [EDX + 0x3c]      ; 004e69e2
    MOV dword ptr [EAX + 0x3c],ECX      ; 004e69e5
    MOV ECX,dword ptr [EDX + 0x40]      ; 004e69e8
    MOV dword ptr [EAX + 0x40],ECX      ; 004e69eb
    MOV ECX,dword ptr [EDX + 0x44]      ; 004e69ee
    MOV dword ptr [EAX + 0x44],ECX      ; 004e69f1
    MOV ECX,dword ptr [EDX + 0x48]      ; 004e69f4
    MOV dword ptr [EAX + 0x48],ECX      ; 004e69f7
    MOV ECX,dword ptr [EDX + 0x4c]      ; 004e69fa
    MOV dword ptr [EAX + 0x4c],ECX      ; 004e69fd
    MOV ECX,dword ptr [EDX + 0x50]      ; 004e6a00
    MOV dword ptr [EAX + 0x50],ECX      ; 004e6a03
    ADD EAX,0x58                        ; 004e6a06
    MOV ECX,dword ptr [EDX + 0x54]      ; 004e6a09
    ADD EDX,0x58                        ; 004e6a0c
    MOV dword ptr [EAX + -0x4],ECX      ; 004e6a0f
    CMP EAX,EDX                         ; 004e6a12
    JZ 0x004e6a26                       ; 004e6a14
        ;   XREF to: 004e6a26 (CONDITIONAL_JUMP)  ; LAB_004e6a26
    MOV ECX,dword ptr [EDX]             ; 004e6a16
    MOV dword ptr [EAX],ECX             ; 004e6a18
    MOV ECX,dword ptr [EDX + 0x4]       ; 004e6a1a
    MOV dword ptr [EAX + 0x4],ECX       ; 004e6a1d
    MOV ECX,dword ptr [EDX + 0x8]       ; 004e6a20
    MOV dword ptr [EAX + 0x8],ECX       ; 004e6a23
    MOV dword ptr [ESI + 0x8],0x0       ; 004e6a26
        ;   Label: LAB_004e6a26
    MOV dword ptr [ESI + 0x4],0x0       ; 004e6a2d
    MOV dword ptr [EBX],0x0             ; 004e6a34
    POP EDI                             ; 004e6a3a
    MOV dword ptr [EBX + 0x8],0x0       ; 004e6a3b
        ;   Label: LAB_004e6a3b
    MOV dword ptr [EBX + 0x4],0x0       ; 004e6a42
    POP EBP                             ; 004e6a49
    POP ESI                             ; 004e6a4a
    POP EBX                             ; 004e6a4b
    RET                                 ; 004e6a4c

