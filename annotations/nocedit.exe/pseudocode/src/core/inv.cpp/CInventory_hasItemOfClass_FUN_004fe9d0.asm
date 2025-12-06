; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_inv.cpp_CInventory_hasItemOfClass_FUN_004fe9d0(CInventory * this_ptr, char * class_name)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   class_name
;
; XREF[1]:
;   core_event.cpp_CEventList_FUN_004ae140 at 004aec31
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fea20
        ;   Label: core_inv.cpp_CInventory_hasItemOfClass_FUN_004fe9d0
    PUSH ESI                            ; 004fea21
    PUSH EDI                            ; 004fea22
    PUSH EBP                            ; 004fea23
    MOV EDI,dword ptr [ESP + 0x14]      ; 004fea24
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fea28
    MOV EDX,dword ptr [EDI + 0x8]       ; 004fea2c
    XOR EBX,EBX                         ; 004fea2f
    TEST EDX,EDX                        ; 004fea31
    JLE 0x004fea53                      ; 004fea33 | LAB_004fea53
        ;   XREF to: 004fea53 (CONDITIONAL_JUMP)
    MOV ESI,EDI                         ; 004fea35
    PUSH EBP                            ; 004fea37
        ;   Label: LAB_004fea37
    MOV EAX,dword ptr [ESI + 0xc]       ; 004fea38
    PUSH EAX                            ; 004fea3b
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fea3c | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fea41
    TEST EAX,EAX                        ; 004fea44
    JNZ 0x004fea5a                      ; 004fea46 | LAB_004fea5a
        ;   XREF to: 004fea5a (CONDITIONAL_JUMP)
    INC EBX                             ; 004fea48
    MOV ECX,dword ptr [EDI + 0x8]       ; 004fea49
    ADD ESI,0x4                         ; 004fea4c
    CMP EBX,ECX                         ; 004fea4f
    JL 0x004fea37                       ; 004fea51 | LAB_004fea37
        ;   XREF to: 004fea37 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004fea53
        ;   Label: LAB_004fea53
    POP EBP                             ; 004fea55
    POP EDI                             ; 004fea56
    POP ESI                             ; 004fea57
    POP EBX                             ; 004fea58
    RET                                 ; 004fea59
    MOV EAX,0x1                         ; 004fea5a
        ;   Label: LAB_004fea5a
    POP EBP                             ; 004fea5f
    POP EDI                             ; 004fea60
    POP ESI                             ; 004fea61
    POP EBX                             ; 004fea62
    RET                                 ; 004fea63

