; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * __cdecl support_trisock_cpp_parseIPAddress_FUN_0059c4d0(uint *result_ptr,char *dotted_decimal_string)
;
; Parameters:
; uint *           Stack[0x4]:4   result_ptr
; char *           Stack[0x8]:4   dotted_decimal_string
;
; XREF[1]:
;   core_game.cpp_joinNetworkGame_FUN_004d7e90 at 004d7ed6
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   support_trisock.cpp_parseIPComponents_FUN_0059c5d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c4d0
        ;   Label: support_trisock.cpp_parseIPAddress_FUN_0059c4d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c4d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059c4d5
    PUSH EDX                            ; 0059c4d9
    PUSH EBX                            ; 0059c4da
    CALL support_trisock.cpp_parseIPComponents_FUN_0059c5d0 ; 0059c4db
        ;   XREF to: 0059c5d0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_parseIPComponents_FUN_0059c5d0(uint * result_ptr, char * dotted_decimal_string)
    ADD ESP,0x8                         ; 0059c4e0
    TEST EAX,EAX                        ; 0059c4e3
    JZ 0x0059c4eb                       ; 0059c4e5
        ;   XREF to: 0059c4eb (CONDITIONAL_JUMP)  ; LAB_0059c4eb
    MOV EAX,EBX                         ; 0059c4e7
    POP EBX                             ; 0059c4e9
    RET                                 ; 0059c4ea
    PUSH EDI                            ; 0059c4eb
        ;   Label: LAB_0059c4eb
    PUSH ESI                            ; 0059c4ec
    MOV EDI,dword ptr [ESP + 0x14]      ; 0059c4ed
    PUSH EDI                            ; 0059c4f1
    MOV ECX,0x5f82a4                    ; 0059c4f2
    MOV ESI,0x57                        ; 0059c4f7
    PUSH 0x5f82bb                       ; 0059c4fc
    MOV dword ptr [0x01d1d400],ECX      ; 0059c501 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0059c507 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0059c50d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0059c512
    POP ESI                             ; 0059c515
    POP EDI                             ; 0059c516
    MOV EAX,EBX                         ; 0059c517
    POP EBX                             ; 0059c519
    RET                                 ; 0059c51a

