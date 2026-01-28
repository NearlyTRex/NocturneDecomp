; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_0050b360 (CMirrorHack *this_ptr,COrientation *user_orientation,SInteractionState *interaction_state )
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; COrientation *   Stack[0x8]:4   user_orientation
; SInteractionState * Stack[0xc]:4   interaction_state
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b360
        ;   Label: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_0050b360
    MOV ECX,dword ptr [ESP + 0x8]       ; 0050b361
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050b365
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050b369
    MOV EBX,dword ptr [EAX + 0xc]       ; 0050b36d
    TEST EBX,EBX                        ; 0050b370
    JNZ 0x0050b3a1                      ; 0050b372
        ;   XREF to: 0050b3a1 (CONDITIONAL_JUMP)  ; LAB_0050b3a1
    CMP dword ptr [EAX + 0x10],0x0      ; 0050b374
    JNZ 0x0050b3ac                      ; 0050b378
        ;   XREF to: 0050b3ac (CONDITIONAL_JUMP)  ; LAB_0050b3ac
    LEA EAX,[ECX + 0x30]                ; 0050b37a
    CMP EAX,EDX                         ; 0050b37d
    JZ 0x0050b391                       ; 0050b37f
        ;   XREF to: 0050b391 (CONDITIONAL_JUMP)  ; LAB_0050b391
    MOV EBX,dword ptr [EDX]             ; 0050b381
    MOV dword ptr [EAX],EBX             ; 0050b383
    MOV EBX,dword ptr [EDX + 0x4]       ; 0050b385
    MOV dword ptr [EAX + 0x4],EBX       ; 0050b388
    MOV EBX,dword ptr [EDX + 0x8]       ; 0050b38b
    MOV dword ptr [EAX + 0x8],EBX       ; 0050b38e
    PUSH ECX                            ; 0050b391
        ;   Label: LAB_0050b391
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0050b392
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 0050b397
    ADD ESP,0x4                         ; 0050b39c
    POP EBX                             ; 0050b39f
    RET                                 ; 0050b3a0
    MOV dword ptr [EAX + 0xc],0x0       ; 0050b3a1
        ;   Label: LAB_0050b3a1
    XOR EAX,EAX                         ; 0050b3a8
    POP EBX                             ; 0050b3aa
    RET                                 ; 0050b3ab
    MOV dword ptr [EAX + 0x10],EBX      ; 0050b3ac
        ;   Label: LAB_0050b3ac
    XOR EAX,EAX                         ; 0050b3af
    POP EBX                             ; 0050b3b1
    RET                                 ; 0050b3b2

