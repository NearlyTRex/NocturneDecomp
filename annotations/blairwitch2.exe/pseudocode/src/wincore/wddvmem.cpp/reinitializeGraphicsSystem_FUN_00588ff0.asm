; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_00588ff0(void)
;
;
; XREF[1]:
;   engine_2d.c_reinitializeGraphicsSystem_FUN_00402ad0 at 00402ad0
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_0264bba0
;   undefined4 DAT_02661ae0
;   undefined4 DAT_02661ae4
;   undefined4 DAT_02661ae8
;   undefined4 DAT_02661aec
;   undefined4 DAT_02661af8
;   undefined4 DAT_02664628
;
; Called Functions:
;   crt_ddraw.c_DirectDrawCreate
;   engine_special.cpp_restoreVideoMode_FUN_0055f8c0
;   wincore_wddvmem.cpp_FUN_00588a50
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00588ff0
        ;   Label: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_00588ff0
    XOR EDX,EDX                         ; 00588ff1
    MOV ECX,dword ptr [0x0264bba0]      ; 00588ff3 | DAT_0264bba0
    MOV dword ptr [0x02661af8],EDX      ; 00588ff9 | DAT_02661af8
    TEST ECX,ECX                        ; 00588fff
    JNZ 0x00589005                      ; 00589001
        ;   XREF to: 00589005 (CONDITIONAL_JUMP)  ; LAB_00589005
    POP EBP                             ; 00589003
    RET                                 ; 00589004
    PUSH EDI                            ; 00589005
        ;   Label: LAB_00589005
    PUSH ESI                            ; 00589006
    PUSH EBX                            ; 00589007
    CALL engine_special.cpp_restoreVideoMode_FUN_0055f8c0 ; 00589008
        ;   XREF to: 0055f8c0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_restoreVideoMode_FUN_0055f8c0()
    MOV EBX,dword ptr [0x02661aec]      ; 0058900d | DAT_02661aec
    TEST EBX,EBX                        ; 00589013
    JZ 0x00589025                       ; 00589015
        ;   XREF to: 00589025 (CONDITIONAL_JUMP)  ; LAB_00589025
    PUSH EBX                            ; 00589017
    MOV EDX,dword ptr [EBX]             ; 00589018
    XOR ESI,ESI                         ; 0058901a
    CALL dword ptr [EDX + 0x8]          ; 0058901c
    MOV dword ptr [0x02661aec],ESI      ; 0058901f | DAT_02661aec
    MOV EDI,dword ptr [0x02661ae8]      ; 00589025 | DAT_02661ae8
        ;   Label: LAB_00589025
    TEST EDI,EDI                        ; 0058902b
    JZ 0x0058903d                       ; 0058902d
        ;   XREF to: 0058903d (CONDITIONAL_JUMP)  ; LAB_0058903d
    PUSH EDI                            ; 0058902f
    MOV EDX,dword ptr [EDI]             ; 00589030
    XOR EBP,EBP                         ; 00589032
    CALL dword ptr [EDX + 0x8]          ; 00589034
    MOV dword ptr [0x02661ae8],EBP      ; 00589037 | DAT_02661ae8
    MOV EAX,[0x02661ae4]                ; 0058903d | DAT_02661ae4
        ;   Label: LAB_0058903d
    TEST EAX,EAX                        ; 00589042
    JZ 0x00589054                       ; 00589044
        ;   XREF to: 00589054 (CONDITIONAL_JUMP)  ; LAB_00589054
    PUSH EAX                            ; 00589046
    MOV EDX,dword ptr [EAX]             ; 00589047
    CALL dword ptr [EDX + 0x8]          ; 00589049
    XOR EDX,EDX                         ; 0058904c
    MOV dword ptr [0x02661ae4],EDX      ; 0058904e | DAT_02661ae4
    MOV ECX,dword ptr [0x02661ae0]      ; 00589054 | DAT_02661ae0
        ;   Label: LAB_00589054
    TEST ECX,ECX                        ; 0058905a
    JZ 0x00589077                       ; 0058905c
        ;   XREF to: 00589077 (CONDITIONAL_JUMP)  ; LAB_00589077
    PUSH ECX                            ; 0058905e
    MOV EDX,dword ptr [ECX]             ; 0058905f
    CALL dword ptr [EDX + 0x4c]         ; 00589061
    MOV EAX,[0x02661ae0]                ; 00589064 | DAT_02661ae0
    PUSH EAX                            ; 00589069
    MOV EDX,dword ptr [EAX]             ; 0058906a
    XOR EBX,EBX                         ; 0058906c
    CALL dword ptr [EDX + 0x8]          ; 0058906e
    MOV dword ptr [0x02661ae0],EBX      ; 00589071 | DAT_02661ae0
    PUSH 0x0                            ; 00589077
        ;   Label: LAB_00589077
    PUSH 0x2661ae0                      ; 00589079 | DAT_02661ae0
    PUSH 0x0                            ; 0058907e
    CALL crt_ddraw.c_DirectDrawCreate   ; 00589080
        ;   XREF to: 005c74ae (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lp_guid, LPDIRECTDRAW * lplp_dd, IUnknown * p_unk_outer)
    TEST EAX,EAX                        ; 00589085
    JNZ 0x0058909d                      ; 00589087
        ;   XREF to: 0058909d (CONDITIONAL_JUMP)  ; LAB_0058909d
    PUSH 0x11                           ; 00589089
    MOV ESI,dword ptr [0x02664628]      ; 0058908b | DAT_02664628
    MOV EAX,[0x02661ae0]                ; 00589091 | DAT_02661ae0
    PUSH ESI                            ; 00589096
    MOV EDX,dword ptr [EAX]             ; 00589097
    PUSH EAX                            ; 00589099
    CALL dword ptr [EDX + 0x50]         ; 0058909a
    MOV EDI,dword ptr [0x006141c0]      ; 0058909d | DAT_006141c0
        ;   Label: LAB_0058909d
    PUSH EDI                            ; 005890a3
    MOV EBP,dword ptr [0x006141bc]      ; 005890a4 | DAT_006141bc
    PUSH EBP                            ; 005890aa
    MOV EAX,[0x006141b8]                ; 005890ab | DAT_006141b8
    PUSH EAX                            ; 005890b0
    CALL wincore_wddvmem.cpp_FUN_00588a50 ; 005890b1
        ;   XREF to: 00588a50 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_FUN_00588a50(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 005890b6
    POP EBX                             ; 005890b9
    POP ESI                             ; 005890ba
    POP EDI                             ; 005890bb
    POP EBP                             ; 005890bc
    RET                                 ; 005890bd

