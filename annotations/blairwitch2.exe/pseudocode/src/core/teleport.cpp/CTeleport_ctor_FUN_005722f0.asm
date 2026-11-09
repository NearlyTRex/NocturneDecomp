; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleport * __cdecl core_teleport_cpp_CTeleport_ctor_FUN_005722f0(CTeleport *this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_teleport.cpp_FUN_005722c0 at 005722d3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005722f0
        ;   Label: core_teleport.cpp_CTeleport_ctor_FUN_005722f0
    PUSH EDX                            ; 005722f4
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 005722f5
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x2b0],0x5fcb34 ; 005722fa
    MOV dword ptr [EAX + 0x2b4],0x40a00000 ; 00572304
    MOV dword ptr [EAX + 0x2b8],0x41100000 ; 0057230e
    MOV dword ptr [EAX + 0x2bc],0x40a00000 ; 00572318
    ADD ESP,0x4                         ; 00572322
    MOV dword ptr [EAX + 0x2c0],0x0     ; 00572325
    RET                                 ; 0057232f

