; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00557db0(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[3]:
;   core_setcolid.cpp_FUN_005562c0 at 00556501
;   core_setcolid.cpp_FUN_005578b0 at 00557ad2
;   core_setcolid.cpp_FUN_00558450 at 0055863f
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_isOfClassHash_FUN_0040c5d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557db0
        ;   Label: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00557db0
    PUSH ESI                            ; 00557db1
    PUSH EDI                            ; 00557db2
    PUSH EBP                            ; 00557db3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00557db4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00557db8
    CMP dword ptr [EBX + 0x15f6b0],0x0  ; 00557dbc
    JNZ 0x00557df0                      ; 00557dc3
        ;   XREF to: 00557df0 (CONDITIONAL_JUMP)  ; LAB_00557df0
    MOV EDI,dword ptr [EBX + 0x15f6ac]  ; 00557dc5
        ;   Label: LAB_00557dc5
    XOR EAX,EAX                         ; 00557dcb
    TEST EDI,EDI                        ; 00557dcd
    JLE 0x00557de9                      ; 00557dcf
        ;   XREF to: 00557de9 (CONDITIONAL_JUMP)  ; LAB_00557de9
    MOV EDX,EBX                         ; 00557dd1
    CMP ESI,dword ptr [EDX + 0x15f6b4]  ; 00557dd3
        ;   Label: LAB_00557dd3
    JZ 0x00557e04                       ; 00557dd9
        ;   XREF to: 00557e04 (CONDITIONAL_JUMP)  ; LAB_00557e04
    INC EAX                             ; 00557ddb
    MOV EBP,dword ptr [EBX + 0x15f6ac]  ; 00557ddc
    ADD EDX,0x4                         ; 00557de2
    CMP EAX,EBP                         ; 00557de5
    JL 0x00557dd3                       ; 00557de7
        ;   XREF to: 00557dd3 (CONDITIONAL_JUMP)  ; LAB_00557dd3
    XOR EAX,EAX                         ; 00557de9
        ;   Label: LAB_00557de9
    POP EBP                             ; 00557deb
    POP EDI                             ; 00557dec
    POP ESI                             ; 00557ded
    POP EBX                             ; 00557dee
    RET                                 ; 00557def
    MOV ECX,dword ptr [0x007c637c]      ; 00557df0 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_00557df0
    PUSH ECX                            ; 00557df6
    PUSH ESI                            ; 00557df7
    CALL core_actor.cpp_isOfClassHash_FUN_0040c5d0 ; 00557df8
        ;   XREF to: 0040c5d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClassHash_FUN_0040c5d0()
    ADD ESP,0x8                         ; 00557dfd
    TEST EAX,EAX                        ; 00557e00
    JZ 0x00557dc5                       ; 00557e02
        ;   XREF to: 00557dc5 (CONDITIONAL_JUMP)  ; LAB_00557dc5
    MOV EAX,0x1                         ; 00557e04
        ;   Label: LAB_00557e04
    POP EBP                             ; 00557e09
    POP EDI                             ; 00557e0a
    POP ESI                             ; 00557e0b
    POP EBX                             ; 00557e0c
    RET                                 ; 00557e0d

