; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   from_bone_index
; int              Stack[0xc]:4   to_bone_index
; char *           Stack[0x10]:4   motion_name
; int              Stack[0x14]:4   direction
;
; XREF[3]:
;   core_doc.cpp_CDoc_ctor_FUN_004500d0 at 004502eb
;   core_scat.cpp_CScat_ctor_FUN_0051e9a0 at 0051ea3f
;   core_stranger.cpp_CStranger_ctor_FUN_005627f0 at 00562a1a
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a330
        ;   Label: core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330
    PUSH ESI                            ; 0042a331
    PUSH EDI                            ; 0042a332
    MOV EBX,dword ptr [ESP + 0x10]      ; 0042a333
    CMP dword ptr [EBX + 0x2830],0x16   ; 0042a337
    JGE 0x0042a39e                      ; 0042a33e
        ;   XREF to: 0042a39e (CONDITIONAL_JUMP)  ; LAB_0042a39e
    MOV EAX,dword ptr [EBX + 0x2830]    ; 0042a340
        ;   Label: LAB_0042a340
    SHL EAX,0x3                         ; 0042a346
    MOV EDI,dword ptr [EBX + 0x2830]    ; 0042a349
    MOV EDX,EAX                         ; 0042a34f
    SHL EAX,0x3                         ; 0042a351
    INC EDI                             ; 0042a354
    SUB EAX,EDX                         ; 0042a355
    LEA EDX,[EBX + 0x2834]              ; 0042a357
    MOV dword ptr [EBX + 0x2830],EDI    ; 0042a35d
    ADD EDX,EAX                         ; 0042a363
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042a365
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0042a369
    MOV dword ptr [EDX],EAX             ; 0042a36d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042a36f
    LEA EDI,[EDX + 0x8]                 ; 0042a373
    MOV dword ptr [EDX + 0x4],EAX       ; 0042a376
    PUSH EDI                            ; 0042a379
    MOV AL,byte ptr [ESI]               ; 0042a37a
        ;   Label: LAB_0042a37a
    MOV byte ptr [EDI],AL               ; 0042a37c
    CMP AL,0x0                          ; 0042a37e
    JZ 0x0042a392                       ; 0042a380
        ;   XREF to: 0042a392 (CONDITIONAL_JUMP)  ; LAB_0042a392
    MOV AL,byte ptr [ESI + 0x1]         ; 0042a382
    ADD ESI,0x2                         ; 0042a385
    MOV byte ptr [EDI + 0x1],AL         ; 0042a388
    ADD EDI,0x2                         ; 0042a38b
    CMP AL,0x0                          ; 0042a38e
    JNZ 0x0042a37a                      ; 0042a390
        ;   XREF to: 0042a37a (CONDITIONAL_JUMP)  ; LAB_0042a37a
    POP EDI                             ; 0042a392
        ;   Label: LAB_0042a392
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042a393
    MOV dword ptr [EDX + 0x28],EAX      ; 0042a397
    POP EDI                             ; 0042a39a
    POP ESI                             ; 0042a39b
    POP EBX                             ; 0042a39c
    RET                                 ; 0042a39d
    MOV ECX,0x5cd19d                    ; 0042a39e
        ;   Label: LAB_0042a39e
    MOV ESI,0x11a0                      ; 0042a3a3
    PUSH 0x5cd1b2                       ; 0042a3a8
    MOV dword ptr [0x01d046a0],ECX      ; 0042a3ad | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0042a3b3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042a3b9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042a3be
    JMP 0x0042a340                      ; 0042a3c1
        ;   XREF to: 0042a340 (UNCONDITIONAL_JUMP)  ; LAB_0042a340

