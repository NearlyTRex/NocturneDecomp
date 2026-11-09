; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_004aa2d0(CEventList *this_ptr,char *name,uint sfx_handle)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; uint             Stack[0xc]:4   sfx_handle
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a4ab2
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005ded3a
;   TerminatedCString s_CEventList_setSfxHandle_005ded4c
;   TerminatedCString s_core_event_cpp_005ded75
;   TerminatedCString s_CEventList_setSfxHandle_005ded87
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_event.cpp_CEventList_findSfxEntry_FUN_004aa3b0
;   core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa2d0
        ;   Label: core_event.cpp_CEventList_setSfxHandle_FUN_004aa2d0
    PUSH ESI                            ; 004aa2d1
    PUSH EDI                            ; 004aa2d2
    PUSH EBP                            ; 004aa2d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004aa2d4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004aa2d8
    PUSH EBX                            ; 004aa2dc
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400 ; 004aa2dd
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004aa2e2
    PUSH ESI                            ; 004aa2e5
    PUSH EBX                            ; 004aa2e6
    CALL core_event.cpp_CEventList_findSfxEntry_FUN_004aa3b0 ; 004aa2e7
        ;   XREF to: 004aa3b0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findSfxEntry_FUN_004aa3b0(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004aa2ec
    MOV EDX,EAX                         ; 004aa2ef
    TEST EAX,EAX                        ; 004aa2f1
    JGE 0x004aa330                      ; 004aa2f3
        ;   XREF to: 004aa330 (CONDITIONAL_JUMP)  ; LAB_004aa330
    CMP dword ptr [EBX + 0x3ac8],0x14   ; 004aa2f5
    JL 0x004aa321                       ; 004aa2fc
        ;   XREF to: 004aa321 (CONDITIONAL_JUMP)  ; LAB_004aa321
    MOV ECX,0x5ded3a                    ; 004aa2fe | = "..\\core\\event.cpp"
    MOV EDI,0xefd                       ; 004aa303
    PUSH 0x5ded4c                       ; 004aa308 | = "CEventList::setSfxHandle - too many sfx!"
    MOV dword ptr [0x01d1d400],ECX      ; 004aa30d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004aa313 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004aa319
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004aa31e
    MOV EDX,dword ptr [EBX + 0x3ac8]    ; 004aa321
        ;   Label: LAB_004aa321
    LEA EAX,[EDX + 0x1]                 ; 004aa327
    MOV dword ptr [EBX + 0x3ac8],EAX    ; 004aa32a
    LEA EAX,[EDX*0x8 + 0x0]             ; 004aa330
        ;   Label: LAB_004aa330
    ADD EAX,EDX                         ; 004aa337
    LEA EBP,[EBX + 0x3acc]              ; 004aa339
    SHL EAX,0x5                         ; 004aa33f
    MOV EDI,ESI                         ; 004aa342
    ADD EBP,EAX                         ; 004aa344
    SUB ECX,ECX                         ; 004aa346
    DEC ECX                             ; 004aa348
    XOR EAX,EAX                         ; 004aa349
    SCASB.REPNE ES:EDI                  ; 004aa34b
    NOT ECX                             ; 004aa34d
    DEC ECX                             ; 004aa34f
    CMP ECX,0x14                        ; 004aa350
    JNC 0x004aa387                      ; 004aa353
        ;   XREF to: 004aa387 (CONDITIONAL_JUMP)  ; LAB_004aa387
    LEA EDI,[EBP + 0x4]                 ; 004aa355
        ;   Label: LAB_004aa355
    PUSH EDI                            ; 004aa358
    MOV AL,byte ptr [ESI]               ; 004aa359
        ;   Label: LAB_004aa359
    MOV byte ptr [EDI],AL               ; 004aa35b
    CMP AL,0x0                          ; 004aa35d
    JZ 0x004aa371                       ; 004aa35f
        ;   XREF to: 004aa371 (CONDITIONAL_JUMP)  ; LAB_004aa371
    MOV AL,byte ptr [ESI + 0x1]         ; 004aa361
    ADD ESI,0x2                         ; 004aa364
    MOV byte ptr [EDI + 0x1],AL         ; 004aa367
    ADD EDI,0x2                         ; 004aa36a
    CMP AL,0x0                          ; 004aa36d
    JNZ 0x004aa359                      ; 004aa36f
        ;   XREF to: 004aa359 (CONDITIONAL_JUMP)  ; LAB_004aa359
    POP EDI                             ; 004aa371
        ;   Label: LAB_004aa371
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004aa372
    PUSH EBX                            ; 004aa376
    MOV dword ptr [EBP],EAX             ; 004aa377
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400 ; 004aa37a
        ;   XREF to: 004aa400 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004aa37f
    POP EBP                             ; 004aa382
    POP EDI                             ; 004aa383
    POP ESI                             ; 004aa384
    POP EBX                             ; 004aa385
    RET                                 ; 004aa386
    PUSH 0x13                           ; 004aa387
        ;   Label: LAB_004aa387
    PUSH ESI                            ; 004aa389
    MOV EAX,0x5ded75                    ; 004aa38a | = "..\\core\\event.cpp"
    MOV EDX,0xf05                       ; 004aa38f
    PUSH 0x5ded87                       ; 004aa394 | = "CEventList::setSfxHandle - sfx handle..."
    MOV [0x01d1d400],EAX                ; 004aa399 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004aa39e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004aa3a4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 004aa3a9
    JMP 0x004aa355                      ; 004aa3ac
        ;   XREF to: 004aa355 (UNCONDITIONAL_JUMP)  ; LAB_004aa355

