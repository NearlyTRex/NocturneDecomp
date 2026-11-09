; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_wddvmem_cpp_FUN_005798f0(int width,int height)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
;
; XREF[1]:
;   engine_2d.c_FUN_00401010 at 00401029
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005d73f1
;   TerminatedCString s_WDDVMEM_Fatal_out_of_fra_005d7408
;   TerminatedCString s_wincore_wddvmem_cpp_005d7434
;   TerminatedCString s_WDDVMEM_Fatal_out_of_Z_b_005d744b
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_0060b010
;   undefined4 DAT_0072ffac
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02d0bce0
;   undefined4 DAT_02d0bce4
;   undefined4 DAT_02d0bce8
;   undefined4 DAT_02d0bcec
;   ... and 2 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_ddraw.c_DirectDrawCreate
;   crt_unknown.c_FUN_005a3650
;   engine_special.cpp_FUN_00564be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005798f0
        ;   Label: wincore_wddvmem.cpp_FUN_005798f0
    PUSH ESI                            ; 005798f1
    PUSH EDI                            ; 005798f2
    PUSH EBP                            ; 005798f3
    MOV ECX,dword ptr [0x005fba18]      ; 005798f4 | DAT_005fba18
    IMUL ECX,dword ptr [0x005fba1c]     ; 005798fa | DAT_005fba1c
    MOV EAX,[0x005fba20]                ; 00579901 | DAT_005fba20
    MOV EDX,EAX                         ; 00579906
    SAR EDX,0x1f                        ; 00579908
    SHL EDX,0x3                         ; 0057990b
    SBB EAX,EDX                         ; 0057990e
    SAR EAX,0x3                         ; 00579910
    IMUL EAX,ECX                        ; 00579913
    PUSH EAX                            ; 00579916
    CALL crt_unknown.c_FUN_005a3650     ; 00579917
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0057991c
    MOV [0x0060b010],EAX                ; 0057991f | DAT_0060b010
    TEST EAX,EAX                        ; 00579924
    JZ 0x00579a17                       ; 00579926
        ;   XREF to: 00579a17 (CONDITIONAL_JUMP)  ; LAB_00579a17
    MOV EAX,[0x005fba18]                ; 0057992c | DAT_005fba18
        ;   Label: LAB_0057992c
    IMUL EAX,dword ptr [0x005fba1c]     ; 00579931 | DAT_005fba1c
    SHL EAX,0x2                         ; 00579938
    ADD EAX,0x40                        ; 0057993b
    PUSH EAX                            ; 0057993e
    CALL crt_unknown.c_FUN_005a3650     ; 0057993f
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00579944
    MOV [0x02d0bcf0],EAX                ; 00579947 | DAT_02d0bcf0
    TEST EAX,EAX                        ; 0057994c
    JNZ 0x00579973                      ; 0057994e
        ;   XREF to: 00579973 (CONDITIONAL_JUMP)  ; LAB_00579973
    MOV EDI,0x5d7434                    ; 00579950 | = "..\\wincore\\wddvmem.cpp"
    MOV EBP,0xf2                        ; 00579955
    PUSH 0x5d744b                       ; 0057995a | = "WDDVMEM: Fatal - out of Z buffer memory"
    MOV dword ptr [0x01d71de0],EDI      ; 0057995f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00579965 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057996b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00579970
    MOV EAX,[0x02d0bcf0]                ; 00579973 | DAT_02d0bcf0
        ;   Label: LAB_00579973
    ADD EAX,0x10                        ; 00579978
    AND AL,0xf0                         ; 0057997b
    MOV [0x0072ffac],EAX                ; 0057997d | DAT_0072ffac
    MOV EAX,[0x02d0bcec]                ; 00579982 | DAT_02d0bcec
    TEST EAX,EAX                        ; 00579987
    JZ 0x00579999                       ; 00579989
        ;   XREF to: 00579999 (CONDITIONAL_JUMP)  ; LAB_00579999
    PUSH EAX                            ; 0057998b
    MOV EDX,dword ptr [EAX]             ; 0057998c
    CALL dword ptr [EDX + 0x8]          ; 0057998e
    XOR EDX,EDX                         ; 00579991
    MOV dword ptr [0x02d0bcec],EDX      ; 00579993 | DAT_02d0bcec
    MOV ECX,dword ptr [0x02d0bce8]      ; 00579999 | DAT_02d0bce8
        ;   Label: LAB_00579999
    TEST ECX,ECX                        ; 0057999f
    JZ 0x005799b1                       ; 005799a1
        ;   XREF to: 005799b1 (CONDITIONAL_JUMP)  ; LAB_005799b1
    PUSH ECX                            ; 005799a3
    MOV EDX,dword ptr [ECX]             ; 005799a4
    XOR EBX,EBX                         ; 005799a6
    CALL dword ptr [EDX + 0x8]          ; 005799a8
    MOV dword ptr [0x02d0bce8],EBX      ; 005799ab | DAT_02d0bce8
    MOV ESI,dword ptr [0x02d0bce4]      ; 005799b1 | DAT_02d0bce4
        ;   Label: LAB_005799b1
    TEST ESI,ESI                        ; 005799b7
    JZ 0x005799c9                       ; 005799b9
        ;   XREF to: 005799c9 (CONDITIONAL_JUMP)  ; LAB_005799c9
    PUSH ESI                            ; 005799bb
    MOV EDX,dword ptr [ESI]             ; 005799bc
    XOR EDI,EDI                         ; 005799be
    CALL dword ptr [EDX + 0x8]          ; 005799c0
    MOV dword ptr [0x02d0bce4],EDI      ; 005799c3 | DAT_02d0bce4
    MOV EBP,dword ptr [0x02d0bce0]      ; 005799c9 | DAT_02d0bce0
        ;   Label: LAB_005799c9
    TEST EBP,EBP                        ; 005799cf
    JZ 0x005799ec                       ; 005799d1
        ;   XREF to: 005799ec (CONDITIONAL_JUMP)  ; LAB_005799ec
    PUSH EBP                            ; 005799d3
    MOV EDX,dword ptr [EBP]             ; 005799d4
    CALL dword ptr [EDX + 0x4c]         ; 005799d7
    MOV EAX,[0x02d0bce0]                ; 005799da | DAT_02d0bce0
    PUSH EAX                            ; 005799df
    MOV EDX,dword ptr [EAX]             ; 005799e0
    CALL dword ptr [EDX + 0x8]          ; 005799e2
    XOR EAX,EAX                         ; 005799e5
    MOV [0x02d0bce0],EAX                ; 005799e7 | DAT_02d0bce0
    PUSH 0x0                            ; 005799ec
        ;   Label: LAB_005799ec
    PUSH 0x2d0bce0                      ; 005799ee | DAT_02d0bce0
    PUSH 0x0                            ; 005799f3
    CALL crt_ddraw.c_DirectDrawCreate   ; 005799f5
        ;   XREF to: 005b254a (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lp_guid, LPDIRECTDRAW * lplp_dd, IUnknown * p_unk_outer)
    TEST EAX,EAX                        ; 005799fa
    JZ 0x00579a3f                       ; 005799fc
        ;   XREF to: 00579a3f (CONDITIONAL_JUMP)  ; LAB_00579a3f
    MOV EBX,dword ptr [0x02d21b78]      ; 005799fe | DAT_02d21b78
        ;   Label: LAB_005799fe
    PUSH EBX                            ; 00579a04
    CALL engine_special.cpp_FUN_00564be0 ; 00579a05
        ;   XREF to: 00564be0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00564be0(HWND window_handle)
    MOV EAX,0x1                         ; 00579a0a
    ADD ESP,0x4                         ; 00579a0f
    POP EBP                             ; 00579a12
    POP EDI                             ; 00579a13
    POP ESI                             ; 00579a14
    POP EBX                             ; 00579a15
    RET                                 ; 00579a16
    MOV ECX,0x5d73f1                    ; 00579a17 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_00579a17
    MOV EBX,0xed                        ; 00579a1c
    PUSH 0x5d7408                       ; 00579a21 | = "WDDVMEM: Fatal - out of frame buffer ..."
    MOV dword ptr [0x01d71de0],ECX      ; 00579a26 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00579a2c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00579a32
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00579a37
    JMP 0x0057992c                      ; 00579a3a
        ;   XREF to: 0057992c (UNCONDITIONAL_JUMP)  ; LAB_0057992c
    PUSH 0x11                           ; 00579a3f
        ;   Label: LAB_00579a3f
    MOV ECX,dword ptr [0x02d21b78]      ; 00579a41 | DAT_02d21b78
    MOV EAX,[0x02d0bce0]                ; 00579a47 | DAT_02d0bce0
    PUSH ECX                            ; 00579a4c
    MOV EDX,dword ptr [EAX]             ; 00579a4d
    PUSH EAX                            ; 00579a4f
    CALL dword ptr [EDX + 0x50]         ; 00579a50
    JMP 0x005799fe                      ; 00579a53
        ;   XREF to: 005799fe (UNCONDITIONAL_JUMP)  ; LAB_005799fe

