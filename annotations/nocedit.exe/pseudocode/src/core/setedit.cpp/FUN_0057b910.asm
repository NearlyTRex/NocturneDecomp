; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setedit_cpp_FUN_0057b910(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 at 0057ce3a
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0057b910
        ;   Label: core_setedit.cpp_FUN_0057b910
    SUB ESP,0xc                         ; 0057b911
    MOV ECX,dword ptr [ESP + 0x18]      ; 0057b914
    TEST ECX,ECX                        ; 0057b918
    JL 0x0057bb92                       ; 0057b91a
        ;   XREF to: 0057bb92 (CONDITIONAL_JUMP)  ; LAB_0057bb92
    MOV EAX,dword ptr [ESP + 0x14]      ; 0057b920
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 0057b924
    CMP ECX,EDX                         ; 0057b92a
    JGE 0x0057bb92                      ; 0057b92c
        ;   XREF to: 0057bb92 (CONDITIONAL_JUMP)  ; LAB_0057bb92
    PUSH EDI                            ; 0057b932
    PUSH ESI                            ; 0057b933
    PUSH EBX                            ; 0057b934
    MOV dword ptr [ESP + 0xc],ECX       ; 0057b935
    JGE 0x0057bb85                      ; 0057b939
        ;   XREF to: 0057bb85 (CONDITIONAL_JUMP)  ; LAB_0057bb85
    IMUL EDX,ECX,0x1898                 ; 0057b93f
    LEA EBP,[EDX + 0x199c]              ; 0057b945
    ADD EAX,0x19a30                     ; 0057b94b
    LEA EBX,[EDX + 0x104]               ; 0057b950
    ADD EBP,EAX                         ; 0057b956
    LEA ECX,[EDX + 0x1898]              ; 0057b958
    ADD EBX,EAX                         ; 0057b95e
    ADD ECX,EAX                         ; 0057b960
    ADD EAX,EDX                         ; 0057b962
    MOV dword ptr [ESP + 0x14],ECX      ; 0057b964
    MOV dword ptr [ESP + 0x10],EAX      ; 0057b968
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057b96c
        ;   Label: LAB_0057b96c
    MOV EDX,dword ptr [ESP + 0x14]      ; 0057b970
    MOV EDI,EAX                         ; 0057b974
    MOV ECX,dword ptr [EDX]             ; 0057b976
    MOV ESI,EDX                         ; 0057b978
    MOV dword ptr [EAX],ECX             ; 0057b97a
    MOV ECX,0x40                        ; 0057b97c
    LEA EDI,[EDI + 0x4]                 ; 0057b981
    LEA ESI,[ESI + 0x4]                 ; 0057b984
    MOVSD.REP ES:EDI,ESI                ; 0057b987
    CMP EBX,EBP                         ; 0057b989
    JNZ 0x0057bb97                      ; 0057b98b
        ;   XREF to: 0057bb97 (CONDITIONAL_JUMP)  ; LAB_0057bb97
    LEA ECX,[EDX + 0x110]               ; 0057b991
        ;   Label: LAB_0057b991
    LEA ESI,[EAX + 0x110]               ; 0057b997
    CMP ESI,ECX                         ; 0057b99d
    JZ 0x0057b9b1                       ; 0057b99f
        ;   XREF to: 0057b9b1 (CONDITIONAL_JUMP)  ; LAB_0057b9b1
    MOV EDI,dword ptr [ECX]             ; 0057b9a1
    MOV dword ptr [ESI],EDI             ; 0057b9a3
    MOV EDI,dword ptr [ECX + 0x4]       ; 0057b9a5
    MOV dword ptr [ESI + 0x4],EDI       ; 0057b9a8
    MOV EDI,dword ptr [ECX + 0x8]       ; 0057b9ab
    MOV dword ptr [ESI + 0x8],EDI       ; 0057b9ae
    FLD float ptr [EDX + 0x11c]         ; 0057b9b1
        ;   Label: LAB_0057b9b1
    MOV ECX,0x3e                        ; 0057b9b7
    LEA EDI,[EAX + 0x128]               ; 0057b9bc
    FSTP float ptr [EAX + 0x11c]        ; 0057b9c2
    MOV ESI,dword ptr [EDX + 0x120]     ; 0057b9c8
    MOV dword ptr [EAX + 0x120],ESI     ; 0057b9ce
    MOV ESI,dword ptr [EDX + 0x124]     ; 0057b9d4
    MOV dword ptr [EAX + 0x124],ESI     ; 0057b9da
    LEA ESI,[EDX + 0x128]               ; 0057b9e0
    MOVSD.REP ES:EDI,ESI                ; 0057b9e6
    MOVSW ES:EDI,ESI                    ; 0057b9e8
    LEA EDI,[EAX + 0x224]               ; 0057b9ea
    LEA ESI,[EDX + 0x224]               ; 0057b9f0
    MOVSD ES:EDI,ESI                    ; 0057b9f6
    MOVSD ES:EDI,ESI                    ; 0057b9f7
    MOVSD ES:EDI,ESI                    ; 0057b9f8
    MOVSD ES:EDI,ESI                    ; 0057b9f9
    MOV ECX,dword ptr [EDX + 0x11c4]    ; 0057b9fa
    MOV dword ptr [EAX + 0x11c4],ECX    ; 0057ba00
    MOV ECX,dword ptr [EDX + 0x11c8]    ; 0057ba06
    MOV dword ptr [EAX + 0x11c8],ECX    ; 0057ba0c
    MOV ECX,dword ptr [EDX + 0x11cc]    ; 0057ba12
    MOV dword ptr [EAX + 0x11cc],ECX    ; 0057ba18
    MOV ECX,dword ptr [EDX + 0x11d0]    ; 0057ba1e
    MOV dword ptr [EAX + 0x11d0],ECX    ; 0057ba24
    MOV ECX,dword ptr [EDX + 0x11d4]    ; 0057ba2a
    MOV dword ptr [EAX + 0x11d4],ECX    ; 0057ba30
    MOV ECX,dword ptr [EDX + 0x11d8]    ; 0057ba36
    MOV dword ptr [EAX + 0x11d8],ECX    ; 0057ba3c
    MOV ECX,dword ptr [EDX + 0x11dc]    ; 0057ba42
    MOV dword ptr [EAX + 0x11dc],ECX    ; 0057ba48
    MOV ECX,dword ptr [EDX + 0x11e0]    ; 0057ba4e
    MOV dword ptr [EAX + 0x11e0],ECX    ; 0057ba54
    MOV ECX,dword ptr [EDX + 0x11e4]    ; 0057ba5a
    MOV dword ptr [EAX + 0x11e4],ECX    ; 0057ba60
    MOV ECX,dword ptr [EDX + 0x11e8]    ; 0057ba66
    MOV dword ptr [EAX + 0x11e8],ECX    ; 0057ba6c
    MOV ECX,dword ptr [EDX + 0x11ec]    ; 0057ba72
    MOV dword ptr [EAX + 0x11ec],ECX    ; 0057ba78
    MOV ECX,dword ptr [EDX + 0x11f0]    ; 0057ba7e
    LEA EDI,[EAX + 0x11f4]              ; 0057ba84
    MOV dword ptr [EAX + 0x11f0],ECX    ; 0057ba8a
    MOV ECX,0x140                       ; 0057ba90
    LEA ESI,[EDX + 0x11f4]              ; 0057ba95
    MOVSD.REP ES:EDI,ESI                ; 0057ba9b
    MOV ECX,0x20                        ; 0057ba9d
    LEA EDI,[EAX + 0x16f4]              ; 0057baa2
    LEA ESI,[EDX + 0x16f4]              ; 0057baa8
    MOVSD.REP ES:EDI,ESI                ; 0057baae
    MOV ECX,0x20                        ; 0057bab0
    LEA EDI,[EAX + 0x1774]              ; 0057bab5
    LEA ESI,[EDX + 0x1774]              ; 0057babb
    MOVSD.REP ES:EDI,ESI                ; 0057bac1
    MOV ECX,dword ptr [EDX + 0x17f4]    ; 0057bac3
    MOV dword ptr [EAX + 0x17f4],ECX    ; 0057bac9
    MOV ECX,dword ptr [EDX + 0x17f8]    ; 0057bacf
    MOV dword ptr [EAX + 0x17f8],ECX    ; 0057bad5
    MOV ECX,dword ptr [EDX + 0x17fc]    ; 0057badb
    MOV dword ptr [EAX + 0x17fc],ECX    ; 0057bae1
    MOV ECX,dword ptr [EDX + 0x1800]    ; 0057bae7
    MOV dword ptr [EAX + 0x1800],ECX    ; 0057baed
    MOV ECX,dword ptr [EDX + 0x1804]    ; 0057baf3
    MOV dword ptr [EAX + 0x1804],ECX    ; 0057baf9
    MOV ECX,dword ptr [EDX + 0x1808]    ; 0057baff
    MOV dword ptr [EAX + 0x1808],ECX    ; 0057bb05
    MOV ECX,dword ptr [EDX + 0x180c]    ; 0057bb0b
    LEA EDI,[EAX + 0x1810]              ; 0057bb11
    MOV dword ptr [EAX + 0x180c],ECX    ; 0057bb17
    MOV ECX,0x20                        ; 0057bb1d
    LEA ESI,[EDX + 0x1810]              ; 0057bb22
    ADD EBP,0x1898                      ; 0057bb28
    MOVSD.REP ES:EDI,ESI                ; 0057bb2e
    ADD EBX,0x1898                      ; 0057bb30
    MOV ESI,dword ptr [ESP + 0x14]      ; 0057bb36
    MOV EDI,dword ptr [ESP + 0x10]      ; 0057bb3a
    MOV ECX,dword ptr [EDX + 0x1890]    ; 0057bb3e
    ADD ESI,0x1898                      ; 0057bb44
    MOV dword ptr [EAX + 0x1890],ECX    ; 0057bb4a
    ADD EDI,0x1898                      ; 0057bb50
    FLD float ptr [EDX + 0x1894]        ; 0057bb56
    MOV dword ptr [ESP + 0x14],ESI      ; 0057bb5c
    FSTP float ptr [EAX + 0x1894]       ; 0057bb60
    MOV EDX,dword ptr [ESP + 0x20]      ; 0057bb66
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057bb6a
    MOV dword ptr [ESP + 0x10],EDI      ; 0057bb6e
    INC EAX                             ; 0057bb72
    MOV ECX,dword ptr [EDX + 0x19a2c]   ; 0057bb73
    MOV dword ptr [ESP + 0xc],EAX       ; 0057bb79
    CMP EAX,ECX                         ; 0057bb7d
    JL 0x0057b96c                       ; 0057bb7f
        ;   XREF to: 0057b96c (CONDITIONAL_JUMP)  ; LAB_0057b96c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0057bb85
        ;   Label: LAB_0057bb85
    DEC dword ptr [EAX + 0x19a2c]       ; 0057bb89
    POP EBX                             ; 0057bb8f
    POP ESI                             ; 0057bb90
    POP EDI                             ; 0057bb91
    ADD ESP,0xc                         ; 0057bb92
        ;   Label: LAB_0057bb92
    POP EBP                             ; 0057bb95
    RET                                 ; 0057bb96
    MOV ECX,dword ptr [EBP]             ; 0057bb97
        ;   Label: LAB_0057bb97
    MOV dword ptr [EBX],ECX             ; 0057bb9a
    MOV ECX,dword ptr [EBP + 0x4]       ; 0057bb9c
    MOV dword ptr [EBX + 0x4],ECX       ; 0057bb9f
    MOV ECX,dword ptr [EBP + 0x8]       ; 0057bba2
    MOV dword ptr [EBX + 0x8],ECX       ; 0057bba5
    JMP 0x0057b991                      ; 0057bba8
        ;   XREF to: 0057b991 (UNCONDITIONAL_JUMP)  ; LAB_0057b991

