; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_inv_cpp_FUN_004db880(CInventory *this_ptr,char *class_name)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   class_name
;
; XREF[2]:
;   core_ammo.cpp_FUN_0040e450 at 0040e471
;   core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0 at 0048f378
;
; Called Functions:
;   core_actor.cpp_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004db880
        ;   Label: core_inv.cpp_FUN_004db880
    PUSH ESI                            ; 004db881
    PUSH EDI                            ; 004db882
    PUSH EBP                            ; 004db883
    MOV EDI,dword ptr [ESP + 0x14]      ; 004db884
    MOV EBP,dword ptr [ESP + 0x18]      ; 004db888
    MOV EDX,dword ptr [EDI + 0x10]      ; 004db88c
    XOR ESI,ESI                         ; 004db88f
    TEST EDX,EDX                        ; 004db891
    JLE 0x004db8c1                      ; 004db893
        ;   XREF to: 004db8c1 (CONDITIONAL_JUMP)  ; LAB_004db8c1
    MOV EBX,EDI                         ; 004db895
    PUSH EBP                            ; 004db897
        ;   Label: LAB_004db897
    MOV EAX,dword ptr [EBX + 0x14]      ; 004db898
    PUSH EAX                            ; 004db89b
    CALL core_actor.cpp_FUN_0040c840    ; 004db89c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004db8a1
    TEST EAX,EAX                        ; 004db8a4
    JZ 0x004db8b6                       ; 004db8a6
        ;   XREF to: 004db8b6 (CONDITIONAL_JUMP)  ; LAB_004db8b6
    MOV EDX,dword ptr [EDI + 0x468]     ; 004db8a8
    CMP EDX,dword ptr [EBX + 0x46c]     ; 004db8ae
    JZ 0x004db8c8                       ; 004db8b4
        ;   XREF to: 004db8c8 (CONDITIONAL_JUMP)  ; LAB_004db8c8
    INC ESI                             ; 004db8b6
        ;   Label: LAB_004db8b6
    MOV ECX,dword ptr [EDI + 0x10]      ; 004db8b7
    ADD EBX,0x4                         ; 004db8ba
    CMP ESI,ECX                         ; 004db8bd
    JL 0x004db897                       ; 004db8bf
        ;   XREF to: 004db897 (CONDITIONAL_JUMP)  ; LAB_004db897
    XOR EAX,EAX                         ; 004db8c1
        ;   Label: LAB_004db8c1
    POP EBP                             ; 004db8c3
    POP EDI                             ; 004db8c4
    POP ESI                             ; 004db8c5
    POP EBX                             ; 004db8c6
    RET                                 ; 004db8c7
    MOV EAX,0x1                         ; 004db8c8
        ;   Label: LAB_004db8c8
    POP EBP                             ; 004db8cd
    POP EDI                             ; 004db8ce
    POP ESI                             ; 004db8cf
    POP EBX                             ; 004db8d0
    RET                                 ; 004db8d1

