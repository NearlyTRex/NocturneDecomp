; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_FUN_005271c0(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_mobster.cpp_CMobster_process_FUN_00525840 at 00525ef2
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005271c0
        ;   Label: core_mobster.cpp_CMobster_FUN_005271c0
    SUB ESP,0x4                         ; 005271c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005271c4
    FLD float ptr [EBX + 0xbf90]        ; 005271c8
    FLDZ                                ; 005271ce
    FCOMPP                              ; 005271d0
    FNSTSW AX                           ; 005271d2
    SAHF                                ; 005271d4
    JNC 0x005271dc                      ; 005271d5
        ;   XREF to: 005271dc (CONDITIONAL_JUMP)  ; LAB_005271dc
    ADD ESP,0x4                         ; 005271d7
    POP EBX                             ; 005271da
    RET                                 ; 005271db
    PUSH 0x3f800000                     ; 005271dc
        ;   Label: LAB_005271dc
    PUSH 0x3f000000                     ; 005271e1
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005271e6
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

