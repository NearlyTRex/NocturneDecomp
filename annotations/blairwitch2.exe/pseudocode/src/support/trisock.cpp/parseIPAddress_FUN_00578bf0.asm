; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * __cdecl support_trisock_cpp_parseIPAddress_FUN_00578bf0(uint *result_ptr,char *dotted_decimal_string)
;
; Parameters:
; uint *           Stack[0x4]:4   result_ptr
; char *           Stack[0x8]:4   dotted_decimal_string
;
; XREF[1]:
;   core_game.cpp_joinNetworkGame_FUN_004bd3a0 at 004bd3e6
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   support_trisock.cpp_parseIPComponents_FUN_00578cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578bf0
        ;   Label: support_trisock.cpp_parseIPAddress_FUN_00578bf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00578bf1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00578bf5
    PUSH EDX                            ; 00578bf9
    PUSH EBX                            ; 00578bfa
    CALL support_trisock.cpp_parseIPComponents_FUN_00578cf0 ; 00578bfb
        ;   XREF to: 00578cf0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_parseIPComponents_FUN_00578cf0(uint * result_ptr, char * dotted_decimal_string)
    ADD ESP,0x8                         ; 00578c00
    TEST EAX,EAX                        ; 00578c03
    JZ 0x00578c0b                       ; 00578c05
        ;   XREF to: 00578c0b (CONDITIONAL_JUMP)  ; LAB_00578c0b
    MOV EAX,EBX                         ; 00578c07
    POP EBX                             ; 00578c09
    RET                                 ; 00578c0a
    PUSH EDI                            ; 00578c0b
        ;   Label: LAB_00578c0b
    PUSH ESI                            ; 00578c0c
    MOV EDI,dword ptr [ESP + 0x14]      ; 00578c0d
    PUSH EDI                            ; 00578c11
    MOV ECX,0x5ecf8a                    ; 00578c12
    MOV ESI,0x55                        ; 00578c17
    PUSH 0x5ecfa1                       ; 00578c1c
    MOV dword ptr [0x01d046a0],ECX      ; 00578c21 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00578c27 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00578c2d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00578c32
    POP ESI                             ; 00578c35
    POP EDI                             ; 00578c36
    MOV EAX,EBX                         ; 00578c37
    POP EBX                             ; 00578c39
    RET                                 ; 00578c3a

