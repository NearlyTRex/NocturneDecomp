; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_splitLineAtColumn_FUN_00566330(CScript *this_ptr,int column,int line)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   line
;
; XREF[1]:
;   core_script.cpp_CScript_insertText_FUN_00566390 at 00566476
;
; Referenced Globals:
;   undefined4 g_CurrentLineBuffer
;   undefined4 DAT_031101c1
;
; Called Functions:
;   core_script.cpp_CScript_editorPutLine_FUN_005662a0
;   core_script.cpp_CScript_loadLineToBuffer_FUN_00566230
;   shape_edittool.cpp_CStrList_insert_FUN_004a2bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566330
        ;   Label: core_script.cpp_CScript_splitLineAtColumn_FUN_00566330
    PUSH ESI                            ; 00566331
    PUSH EDI                            ; 00566332
    PUSH EBP                            ; 00566333
    MOV ESI,dword ptr [ESP + 0x14]      ; 00566334
    MOV EBX,dword ptr [ESP + 0x18]      ; 00566338
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0056633c
    PUSH EBP                            ; 00566340
    PUSH ESI                            ; 00566341
    CALL core_script.cpp_CScript_loadLineToBuffer_FUN_00566230 ; 00566342
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadLineToBuffer_FUN_00566230(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00566347
    MOV EDI,0x31101c0                   ; 0056634a | g_CurrentLineBuffer
    SUB ECX,ECX                         ; 0056634f
    DEC ECX                             ; 00566351
    XOR EAX,EAX                         ; 00566352
    SCASB.REPNE ES:EDI                  ; 00566354 | g_CurrentLineBuffer | DAT_031101c1
    NOT ECX                             ; 00566356
    DEC ECX                             ; 00566358
    CMP EBX,ECX                         ; 00566359
    JLE 0x0056635f                      ; 0056635b
        ;   XREF to: 0056635f (CONDITIONAL_JUMP)  ; LAB_0056635f
    MOV EBX,ECX                         ; 0056635d
    MOV ECX,0x31101c0                   ; 0056635f | g_CurrentLineBuffer
        ;   Label: LAB_0056635f
    ADD ECX,EBX                         ; 00566364
    PUSH ECX                            ; 00566366 | g_CurrentLineBuffer | DAT_031101c1
    LEA ECX,[EBP + 0x1]                 ; 00566367
    PUSH ECX                            ; 0056636a
    LEA ECX,[ESI + 0x38]                ; 0056636b
    PUSH ECX                            ; 0056636e
    CALL shape_edittool.cpp_CStrList_insert_FUN_004a2bc0 ; 0056636f
        ;   XREF to: 004a2bc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_insert_FUN_004a2bc0(CStrList * this_ptr, int insert_index, char * string_data)
    ADD ESP,0xc                         ; 00566374
    PUSH EBP                            ; 00566377
    XOR AH,AH                           ; 00566378
    PUSH ESI                            ; 0056637a
    MOV byte ptr [EBX + 0x31101c0],AH   ; 0056637b | g_CurrentLineBuffer
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 00566381
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorPutLine_FUN_005662a0(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 00566386
    POP EBP                             ; 00566389
    POP EDI                             ; 0056638a
    POP ESI                             ; 0056638b
    POP EBX                             ; 0056638c
    RET                                 ; 0056638d

