; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dracbrid_cpp_FUN_00485b20(void)
;
;
; XREF[1]:
;   core_dracbrid.cpp_FUN_004858f0 at 00485966
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_FUN_0041a050
;   core_bodypart.cpp_createBodyPart_FUN_00418e10
;   core_charactr.cpp_CCharacter_FUN_0042bd30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485b20
        ;   Label: core_dracbrid.cpp_FUN_00485b20
    PUSH EBP                            ; 00485b21
    MOV EBX,dword ptr [ESP + 0xc]       ; 00485b22
    LEA EAX,[EBX + 0x23b8]              ; 00485b26
    CMP byte ptr [EAX],0x0              ; 00485b2c
    JZ 0x00485b3f                       ; 00485b2f
        ;   XREF to: 00485b3f (CONDITIONAL_JUMP)  ; LAB_00485b3f
    MOV EAX,dword ptr [ESP + 0x10]      ; 00485b31
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00485b35
    JNZ 0x00485b42                      ; 00485b3d
        ;   XREF to: 00485b42 (CONDITIONAL_JUMP)  ; LAB_00485b42
    POP EBP                             ; 00485b3f
        ;   Label: LAB_00485b3f
    POP EBX                             ; 00485b40
    RET                                 ; 00485b41
    PUSH EDI                            ; 00485b42
        ;   Label: LAB_00485b42
    PUSH ESI                            ; 00485b43
    MOV ECX,dword ptr [EBX + 0x2610]    ; 00485b44
    PUSH ECX                            ; 00485b4a
    PUSH 0x0                            ; 00485b4b
    PUSH 0x0                            ; 00485b4d
    PUSH EBX                            ; 00485b4f
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00485b50
    PUSH ESI                            ; 00485b54
    LEA EAX,[EBX + 0x30]                ; 00485b55
    PUSH EAX                            ; 00485b58
    LEA EAX,[EBX + 0x20]                ; 00485b59
    PUSH EAX                            ; 00485b5c
    CALL core_bodypart.cpp_createBodyPart_FUN_00418e10 ; 00485b5d
        ;   XREF to: 00418e10 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00418e10()
    ADD ESP,0x1c                        ; 00485b62
    MOV EDI,dword ptr [ESP + 0x20]      ; 00485b65
    PUSH EDI                            ; 00485b69
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00485b6a
    PUSH EBP                            ; 00485b6e
    PUSH EAX                            ; 00485b6f
    PUSH EBX                            ; 00485b70
    MOV ESI,EAX                         ; 00485b71
    CALL core_charactr.cpp_CCharacter_FUN_0042bd30 ; 00485b73
        ;   XREF to: 0042bd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 00485b78
    PUSH ESI                            ; 00485b7b
    CALL core_bodypart.cpp_CBodyPart_FUN_0041a050 ; 00485b7c
        ;   XREF to: 0041a050 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_FUN_0041a050(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xbf68]    ; 00485b81
    MOV dword ptr [EBX + EAX*0x4 + 0xbf6c],ESI ; 00485b87
    INC dword ptr [EBX + 0xbf68]        ; 00485b8e
    MOV dword ptr [ESI + 0xfc],0x1      ; 00485b94
    MOV dword ptr [ESI + 0xcb4],0x1     ; 00485b9e
    ADD ESP,0x4                         ; 00485ba8
    MOV dword ptr [ESI + 0xcc0],0xffff  ; 00485bab
    POP ESI                             ; 00485bb5
    POP EDI                             ; 00485bb6
    POP EBP                             ; 00485bb7
    POP EBX                             ; 00485bb8
    RET                                 ; 00485bb9

