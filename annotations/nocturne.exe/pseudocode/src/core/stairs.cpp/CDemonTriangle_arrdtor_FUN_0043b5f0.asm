; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_stairs_cpp_CDemonTriangle_arrdtor_FUN_0043b5f0(undefined4 param_1)
;
;
; XREF[7]:
;   FUN_0043b420 at 0043b435
;   FUN_0043b490 at 0043b4a5
;   FUN_00495430 at 00495445
;   FUN_004cc960 at 004cc975
;   FUN_004d60d0 at 004d60e5
;   FUN_0054f7f0 at 0054f805
;   core_stairs.cpp_CStairs_dtor_FUN_00412000 at 00412015
;
; Called Functions:
;   core_course.cpp_CCourse_free_FUN_0043b7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b5f0
        ;   Label: core_stairs.cpp_CDemonTriangle_arrdtor_FUN_0043b5f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043b5f1
    PUSH EBX                            ; 0043b5f5
    CALL core_course.cpp_CCourse_free_FUN_0043b7c0 ; 0043b5f6
        ;   XREF to: 0043b7c0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_free_FUN_0043b7c0()
    ADD ESP,0x4                         ; 0043b5fb
    MOV EAX,EBX                         ; 0043b5fe
    POP EBX                             ; 0043b600
    RET                                 ; 0043b601

