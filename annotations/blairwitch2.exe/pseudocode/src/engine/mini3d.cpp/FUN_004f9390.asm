; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f9390(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[8]:
;   engine_mini3d.cpp_FUN_004f9340 at 004f9357
;   shape_edittool.cpp_FUN_0047a92e at 0047a948
;   shape_edittool.cpp_FUN_0047dc40 at 0047dedd
;   shape_edittool.cpp_FUN_0047e870 at 0047ea8c
;   shape_edittool.cpp_FUN_0047eff0 at 0047f0cd
;   shape_edittool.cpp_FUN_00483ea0 at 00483f22
;   shape_edittool.cpp_FUN_004840f0 at 0048423c
;   shape_edittool.cpp_FUN_00484f20 at 004851f3
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f90d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004f9390
        ;   Label: engine_mini3d.cpp_FUN_004f9390
    PUSH EAX                            ; 004f9394
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f9395
    PUSH EDX                            ; 004f9399
    PUSH EAX                            ; 004f939a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f939b
    PUSH ECX                            ; 004f939f
    CALL engine_mini3d.cpp_FUN_004f90d0 ; 004f93a0
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f90d0()
    ADD ESP,0x10                        ; 004f93a5
    RET                                 ; 004f93a8

