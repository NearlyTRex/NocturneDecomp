; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScript * __cdecl core_script_cpp_CScript_ctor_FUN_005597f0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_staticInit_FUN_005591b0 at 005591cf
;
; Called Functions:
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005597f0
        ;   Label: core_script.cpp_CScript_ctor_FUN_005597f0
    ADD EAX,0x38                        ; 005597f4
    PUSH EAX                            ; 005597f7
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 005597f8
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    MOV dword ptr [EAX + -0x8],0x0      ; 005597fd
    MOV dword ptr [EAX + -0x4],0x0      ; 00559804
    MOV dword ptr [EAX + -0x1c],0x0     ; 0055980b
    MOV dword ptr [EAX + -0x18],0x0     ; 00559812
    MOV dword ptr [EAX + -0x14],0x0     ; 00559819
    MOV dword ptr [EAX + -0x10],0x0     ; 00559820
    ADD ESP,0x4                         ; 00559827
    MOV dword ptr [EAX + -0xc],0x0      ; 0055982a
    SUB EAX,0x38                        ; 00559831
    RET                                 ; 00559834

