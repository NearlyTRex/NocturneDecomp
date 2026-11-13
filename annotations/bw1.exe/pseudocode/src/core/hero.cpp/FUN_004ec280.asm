; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_FUN_004ec280(CHero *this_ptr,int hand_index)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; XREF[3]:
;   core_doc.cpp_FUN_0046bde0 at 0046c075
;   core_gabriela.cpp_FUN_004c83b0 at 004c84dd
;   core_stranger.cpp_FUN_005881d0 at 00588469
;
; Called Functions:
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_004325b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec280
        ;   Label: core_hero.cpp_FUN_004ec280
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ec281
    MOV EDX,dword ptr [EBX + 0x1ff78]   ; 004ec285
    TEST EDX,EDX                        ; 004ec28b
    JNZ 0x004ec291                      ; 004ec28d
        ;   XREF to: 004ec291 (CONDITIONAL_JUMP)  ; LAB_004ec291
    POP EBX                             ; 004ec28f
    RET                                 ; 004ec290
    PUSH ESI                            ; 004ec291
        ;   Label: LAB_004ec291
    PUSH 0x0                            ; 004ec292
    PUSH 0x3dcccccd                     ; 004ec294
    PUSH EDX                            ; 004ec299
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004ec29a
    PUSH ESI                            ; 004ec29e
    PUSH EBX                            ; 004ec29f
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_004325b0 ; 004ec2a0
        ;   XREF to: 004325b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_004325b0(CCharacter * this_ptr, int param_2, int param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 004ec2a5
    MOV dword ptr [EBX + 0x1ff78],0x0   ; 004ec2a8
    POP ESI                             ; 004ec2b2
    POP EBX                             ; 004ec2b3
    RET                                 ; 004ec2b4

