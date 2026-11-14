; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[39]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408a40 at 00408a66
;   core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c990 at 0040ca0b
;   core_actor.cpp_CDemonActor_processFootstep_FUN_0040c8e0 at 0040c93e
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f60 at 0040a697
;   core_blundrbs.cpp_CBlunderbus_fire_FUN_00410490 at 00410768
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a077
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00417f1f
;   core_burncrss.cpp_CBurncross_fire_FUN_00424550 at 00424790
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426a16
;   core_charactr.cpp_FUN_0042c230 at 0042c385
;   ... and 29 more
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005d0bf4
;   TerminatedCString s_CDemonSet_ignore_ignore_005d0c09
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ec10
        ;   Label: core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
    PUSH EBP                            ; 0053ec11
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053ec12
    CMP dword ptr [ESP + 0x10],0x0      ; 0053ec16
    JZ 0x0053ec43                       ; 0053ec1b
        ;   XREF to: 0053ec43 (CONDITIONAL_JUMP)  ; LAB_0053ec43
    MOV ECX,dword ptr [EBX + 0x15f6ac]  ; 0053ec1d
    TEST ECX,ECX                        ; 0053ec23
    JL 0x0053ec43                       ; 0053ec25
        ;   XREF to: 0053ec43 (CONDITIONAL_JUMP)  ; LAB_0053ec43
    CMP ECX,0xa                         ; 0053ec27
    JGE 0x0053ec46                      ; 0053ec2a
        ;   XREF to: 0053ec46 (CONDITIONAL_JUMP)  ; LAB_0053ec46
    MOV EAX,dword ptr [EBX + 0x15f6ac]  ; 0053ec2c
        ;   Label: LAB_0053ec2c
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053ec32
    MOV dword ptr [EBX + EAX*0x4 + 0x15f6b4],EDX ; 0053ec36
    INC dword ptr [EBX + 0x15f6ac]      ; 0053ec3d
    POP EBP                             ; 0053ec43
        ;   Label: LAB_0053ec43
    POP EBX                             ; 0053ec44
    RET                                 ; 0053ec45
    PUSH EDI                            ; 0053ec46
        ;   Label: LAB_0053ec46
    MOV EDI,0x5d0bf4                    ; 0053ec47 | = "..\\core\\setcolid.cpp"
    MOV EBP,0x473                       ; 0053ec4c
    PUSH 0x5d0c09                       ; 0053ec51 | = "CDemonSet::ignore - ignore list is full"
    MOV dword ptr [0x01d71de0],EDI      ; 0053ec56 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0053ec5c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0053ec62
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0053ec67
    POP EDI                             ; 0053ec6a
    JMP 0x0053ec2c                      ; 0053ec6b
        ;   XREF to: 0053ec2c (UNCONDITIONAL_JUMP)  ; LAB_0053ec2c

