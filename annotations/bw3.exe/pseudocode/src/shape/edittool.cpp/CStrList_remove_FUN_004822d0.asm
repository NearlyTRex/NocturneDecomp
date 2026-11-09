; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_remove_FUN_004822d0(CStrList *this_ptr,int start_index,int end_index)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_index
; int              Stack[0xc]:4   end_index
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00484eb0 at 00484ed1
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd515
;   TerminatedCString s_CStrList_remove_invalid_005bd52b
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_string.c_memmove_FUN_005a54c0
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004822d0
        ;   Label: shape_edittool.cpp_CStrList_remove_FUN_004822d0
    PUSH ESI                            ; 004822d1
    PUSH EDI                            ; 004822d2
    PUSH EBP                            ; 004822d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004822d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004822d8
    TEST EBP,EBP                        ; 004822dc
    JL 0x004822ec                       ; 004822de
        ;   XREF to: 004822ec (CONDITIONAL_JUMP)  ; LAB_004822ec
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004822e0
    CMP EAX,dword ptr [ESI]             ; 004822e4
    JL 0x00482378                       ; 004822e6
        ;   XREF to: 00482378 (CONDITIONAL_JUMP)  ; LAB_00482378
    MOV EBX,0x5bd515                    ; 004822ec | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004822ec
    MOV EDI,0xc77                       ; 004822f1
    PUSH 0x5bd52b                       ; 004822f6 | = "CStrList::remove - invalid range"
    MOV dword ptr [0x01d71de0],EBX      ; 004822fb | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00482301 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00482307
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0048230c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048230f
        ;   Label: LAB_0048230f
    CMP EBP,EAX                         ; 00482313
    JG 0x00482340                       ; 00482315
        ;   XREF to: 00482340 (CONDITIONAL_JUMP)  ; LAB_00482340
    LEA EDI,[EAX*0x4 + 0x0]             ; 00482317
    LEA EBX,[EBP*0x4 + 0x0]             ; 0048231e
    MOV EAX,dword ptr [ESI + 0x8]       ; 00482325
        ;   Label: LAB_00482325
    ADD EAX,EBX                         ; 00482328
    MOV EDX,dword ptr [EAX]             ; 0048232a
    TEST EDX,EDX                        ; 0048232c
    JZ 0x00482339                       ; 0048232e
        ;   XREF to: 00482339 (CONDITIONAL_JUMP)  ; LAB_00482339
    PUSH EDX                            ; 00482330
    CALL crt_unknown.c_FUN_005a3770     ; 00482331
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00482336
    ADD EBX,0x4                         ; 00482339
        ;   Label: LAB_00482339
    CMP EBX,EDI                         ; 0048233c
    JLE 0x00482325                      ; 0048233e
        ;   XREF to: 00482325 (CONDITIONAL_JUMP)  ; LAB_00482325
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482340
        ;   Label: LAB_00482340
    SUB EAX,EBP                         ; 00482344
    MOV EBX,dword ptr [ESI]             ; 00482346
    INC EAX                             ; 00482348
    SUB EBX,EAX                         ; 00482349
    MOV EAX,EBX                         ; 0048234b
    MOV dword ptr [ESI],EBX             ; 0048234d
    SUB EAX,EBP                         ; 0048234f
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00482351
    SHL EAX,0x2                         ; 00482355
    SHL EBX,0x2                         ; 00482358
    PUSH EAX                            ; 0048235b
    ADD EBX,0x4                         ; 0048235c
    MOV EAX,dword ptr [ESI + 0x8]       ; 0048235f
    ADD EBX,EAX                         ; 00482362
    SHL EBP,0x2                         ; 00482364
    PUSH EBX                            ; 00482367
    ADD EAX,EBP                         ; 00482368
    PUSH EAX                            ; 0048236a
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0048236b
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00482370
    POP EBP                             ; 00482373
    POP EDI                             ; 00482374
    POP ESI                             ; 00482375
    POP EBX                             ; 00482376
    RET                                 ; 00482377
    CMP EBP,EAX                         ; 00482378
        ;   Label: LAB_00482378
    JG 0x004822ec                       ; 0048237a
        ;   XREF to: 004822ec (CONDITIONAL_JUMP)  ; LAB_004822ec
    JMP 0x0048230f                      ; 00482380
        ;   XREF to: 0048230f (UNCONDITIONAL_JUMP)  ; LAB_0048230f

