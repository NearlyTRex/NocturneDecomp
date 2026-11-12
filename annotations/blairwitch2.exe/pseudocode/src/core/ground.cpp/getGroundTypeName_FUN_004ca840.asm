; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_ground_cpp_getGroundTypeName_FUN_004ca840(EGroundType type)
;
; Parameters:
; EGroundType      Stack[0x4]:4   type
;
; Referenced Globals:
;   TerminatedCString s_DEFAULT_005d972b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ca840
        ;   Label: core_ground.cpp_getGroundTypeName_FUN_004ca840
    DEC EAX                             ; 004ca844
    CMP EAX,0xd                         ; 004ca845
    JA 0x004ca89f                       ; 004ca848
        ;   XREF to: 004ca89f (CONDITIONAL_JUMP)  ; LAB_004ca89f
    JMP dword ptr [EAX*0x4 + 0x4ca7fc]  ; 004ca84a
    MOV EAX,0x5d972b                    ; 004ca89f | = "DEFAULT"
        ;   Label: LAB_004ca89f
    RET                                 ; 004ca8a4

