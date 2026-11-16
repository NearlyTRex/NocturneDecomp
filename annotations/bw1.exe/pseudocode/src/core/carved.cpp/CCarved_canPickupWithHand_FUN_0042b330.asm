; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_carved_cpp_CCarved_canPickupWithHand_FUN_0042b330(CCarved *this_ptr,int object_shape_type)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   object_shape_type
;
; XREF[1]:
;   core_carved.cpp_CCarved_processPickup_FUN_0042a930 at 0042ab71
;
; Called Functions:
;   core_carved.cpp_CCarved_getPickupHandIndex_FUN_0042b290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b330
        ;   Label: core_carved.cpp_CCarved_canPickupWithHand_FUN_0042b330
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042b331
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042b335
    PUSH EDX                            ; 0042b339
    PUSH EBX                            ; 0042b33a
    CALL core_carved.cpp_CCarved_getPickupHandIndex_FUN_0042b290 ; 0042b33b
        ;   XREF to: 0042b290 (UNCONDITIONAL_CALL)  ; int core_carved.cpp_CCarved_getPickupHandIndex_FUN_0042b290(CCarved * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 0042b340
    TEST EAX,EAX                        ; 0042b343
    JL 0x0042b365                       ; 0042b345
        ;   XREF to: 0042b365 (CONDITIONAL_JUMP)  ; LAB_0042b365
    SHL EAX,0x3                         ; 0042b347
    MOV EDX,EAX                         ; 0042b34a
    SHL EAX,0x4                         ; 0042b34c
    SUB EAX,EDX                         ; 0042b34f
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25ac] ; 0042b351
    TEST EAX,EAX                        ; 0042b358
    JL 0x0042b365                       ; 0042b35a
        ;   XREF to: 0042b365 (CONDITIONAL_JUMP)  ; LAB_0042b365
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0042b35c
    POP EBX                             ; 0042b363
    RET                                 ; 0042b364
    XOR EAX,EAX                         ; 0042b365
        ;   Label: LAB_0042b365
    POP EBX                             ; 0042b367
    RET                                 ; 0042b368

