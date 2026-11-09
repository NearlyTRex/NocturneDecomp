; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00434320(CCharacter *this_ptr,int from_bone_index,int to_bone_index,char *motion_name,int direction)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   from_bone_index
; int              Stack[0xc]:4   to_bone_index
; char *           Stack[0x10]:4   motion_name
; int              Stack[0x14]:4   direction
;
; XREF[3]:
;   core_doc.cpp_CDoc_ctor_FUN_00468c80 at 00468e84
;   core_scat.cpp_CScat_ctor_FUN_00540ad0 at 00540b6f
;   core_stranger.cpp_CStranger_ctor_FUN_00585270 at 00585493
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434320
        ;   Label: core_charactr.cpp_FUN_00434320
    PUSH ESI                            ; 00434321
    PUSH EDI                            ; 00434322
    MOV EBX,dword ptr [ESP + 0x10]      ; 00434323
    CMP dword ptr [EBX + 0x27c4],0x16   ; 00434327
    JGE 0x0043438e                      ; 0043432e
        ;   XREF to: 0043438e (CONDITIONAL_JUMP)  ; LAB_0043438e
    MOV EAX,dword ptr [EBX + 0x27c4]    ; 00434330
        ;   Label: LAB_00434330
    SHL EAX,0x3                         ; 00434336
    MOV EDI,dword ptr [EBX + 0x27c4]    ; 00434339
    MOV EDX,EAX                         ; 0043433f
    SHL EAX,0x3                         ; 00434341
    INC EDI                             ; 00434344
    SUB EAX,EDX                         ; 00434345
    LEA EDX,[EBX + 0x27c8]              ; 00434347
    MOV dword ptr [EBX + 0x27c4],EDI    ; 0043434d
    ADD EDX,EAX                         ; 00434353
    MOV EAX,dword ptr [ESP + 0x14]      ; 00434355
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00434359
    MOV dword ptr [EDX],EAX             ; 0043435d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043435f
    LEA EDI,[EDX + 0x8]                 ; 00434363
    MOV dword ptr [EDX + 0x4],EAX       ; 00434366
    PUSH EDI                            ; 00434369
    MOV AL,byte ptr [ESI]               ; 0043436a
        ;   Label: LAB_0043436a
    MOV byte ptr [EDI],AL               ; 0043436c
    CMP AL,0x0                          ; 0043436e
    JZ 0x00434382                       ; 00434370
        ;   XREF to: 00434382 (CONDITIONAL_JUMP)  ; LAB_00434382
    MOV AL,byte ptr [ESI + 0x1]         ; 00434372
    ADD ESI,0x2                         ; 00434375
    MOV byte ptr [EDI + 0x1],AL         ; 00434378
    ADD EDI,0x2                         ; 0043437b
    CMP AL,0x0                          ; 0043437e
    JNZ 0x0043436a                      ; 00434380
        ;   XREF to: 0043436a (CONDITIONAL_JUMP)  ; LAB_0043436a
    POP EDI                             ; 00434382
        ;   Label: LAB_00434382
    MOV EAX,dword ptr [ESP + 0x20]      ; 00434383
    MOV dword ptr [EDX + 0x28],EAX      ; 00434387
    POP EDI                             ; 0043438a
    POP ESI                             ; 0043438b
    POP EBX                             ; 0043438c
    RET                                 ; 0043438d
    MOV ECX,0x5d5e56                    ; 0043438e
        ;   Label: LAB_0043438e
    MOV ESI,0x117a                      ; 00434393
    PUSH 0x5d5e6b                       ; 00434398
    MOV dword ptr [0x01d1d400],ECX      ; 0043439d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004343a3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004343a9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004343ae
    JMP 0x00434330                      ; 004343b1
        ;   XREF to: 00434330 (UNCONDITIONAL_JUMP)  ; LAB_00434330

