; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_FUN_00566390(CScript *this_ptr,char *param_2,int param_3)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_script.cpp_CScript_FUN_00565130 at 0056596c
;   core_script.cpp_CScript_FUN_00565f70 at 0056606f
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564bc0
;
; Referenced Globals:
;   int g_CurrentEditingColumn
;   int g_CurrentEditingLine
;   char[16385] g_CurrentLineBuffer
;   undefined4 g_CurrentLineBuffer
;   undefined4 DAT_031101c1
;
; Called Functions:
;   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
;   core_script.cpp_CScript_editorPutLine_FUN_005662a0
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90
;   core_script.cpp_CScript_FUN_00566330
;   core_script.cpp_CScript_loadLineToBuffer_FUN_00566230
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566390
        ;   Label: core_script.cpp_CScript_FUN_00566390
    PUSH ESI                            ; 00566391
    PUSH EDI                            ; 00566392
    PUSH EBP                            ; 00566393
    SUB ESP,0x8                         ; 00566394
    MOV ESI,dword ptr [ESP + 0x20]      ; 00566397
    MOV EDX,dword ptr [0x0310fd44]      ; 0056639b | g_CurrentEditingColumn
    PUSH EDX                            ; 005663a1
    MOV ECX,dword ptr [0x0310fd48]      ; 005663a2 | g_CurrentEditingLine
    PUSH ECX                            ; 005663a8
    MOV EBX,dword ptr [ESP + 0x24]      ; 005663a9
    PUSH EBX                            ; 005663ad
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 005663ae
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    ADD ESP,0xc                         ; 005663b3
    MOV EBP,EAX                         ; 005663b6
    MOV EAX,[0x0310fd48]                ; 005663b8 | g_CurrentEditingLine
    MOV dword ptr [ESP + 0x4],EAX       ; 005663bd
    CMP byte ptr [ESI],0x0              ; 005663c1
    JZ 0x00566490                       ; 005663c4
        ;   XREF to: 00566490 (CONDITIONAL_JUMP)  ; LAB_00566490
    MOV EAX,dword ptr [ESP + 0x4]       ; 005663ca
        ;   Label: LAB_005663ca
    PUSH EAX                            ; 005663ce
    MOV EDX,dword ptr [ESP + 0x20]      ; 005663cf
    PUSH EDX                            ; 005663d3
    CALL core_script.cpp_CScript_loadLineToBuffer_FUN_00566230 ; 005663d4
        ;   XREF to: 00566230 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadLineToBuffer_FUN_00566230(CScript * this_ptr, int line_number)
    ADD ESP,0x8                         ; 005663d9
    MOV EDI,0x31101c0                   ; 005663dc | g_CurrentLineBuffer
    SUB ECX,ECX                         ; 005663e1
    DEC ECX                             ; 005663e3
    XOR EAX,EAX                         ; 005663e4
    SCASB.REPNE ES:EDI                  ; 005663e6 | g_CurrentLineBuffer | DAT_031101c1
    NOT ECX                             ; 005663e8
    DEC ECX                             ; 005663ea
    MOV EBX,ECX                         ; 005663eb
    CMP ECX,EBP                         ; 005663ed
    JGE 0x005663fe                      ; 005663ef
        ;   XREF to: 005663fe (CONDITIONAL_JUMP)  ; LAB_005663fe
    MOV DH,0x20                         ; 005663f1
    INC EBX                             ; 005663f3
        ;   Label: LAB_005663f3
    MOV byte ptr [EBX + 0x31101bf],DH   ; 005663f4 | g_CurrentLineBuffer | DAT_031101c1
    CMP EBX,EBP                         ; 005663fa
    JL 0x005663f3                       ; 005663fc
        ;   XREF to: 005663f3 (CONDITIONAL_JUMP)  ; LAB_005663f3
    LEA EAX,[EBP + 0x1]                 ; 005663fe
        ;   Label: LAB_005663fe
    ADD EAX,0x31101c0                   ; 00566401 | g_CurrentLineBuffer
    MOV EDI,EBP                         ; 00566406
    MOV dword ptr [ESP],EAX             ; 00566408
    ADD EDI,0x31101c0                   ; 0056640b | g_CurrentLineBuffer
    MOV CL,byte ptr [ESI]               ; 00566411
        ;   Label: LAB_00566411
    TEST CL,CL                          ; 00566413
    JZ 0x0056644b                       ; 00566415
        ;   XREF to: 0056644b (CONDITIONAL_JUMP)  ; LAB_0056644b
    CMP CL,0xa                          ; 00566417
    JZ 0x0056644b                       ; 0056641a
        ;   XREF to: 0056644b (CONDITIONAL_JUMP)  ; LAB_0056644b
    CMP CL,0xd                          ; 0056641c
    JNZ 0x00566424                      ; 0056641f
        ;   XREF to: 00566424 (CONDITIONAL_JUMP)  ; LAB_00566424
    INC ESI                             ; 00566421
        ;   Label: LAB_00566421
    JMP 0x00566411                      ; 00566422
        ;   XREF to: 00566411 (UNCONDITIONAL_JUMP)  ; LAB_00566411
    MOV EAX,EBX                         ; 00566424
        ;   Label: LAB_00566424
    SUB EAX,EBP                         ; 00566426
    PUSH EAX                            ; 00566428
    PUSH EDI                            ; 00566429
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056642a
    PUSH EDX                            ; 0056642e
    INC EBX                             ; 0056642f
    INC EBP                             ; 00566430
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00566431
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00566436
    INC EDI                             ; 00566439
    MOV ECX,dword ptr [ESP]             ; 0056643a
    MOV AL,byte ptr [ESI]               ; 0056643d
    INC ECX                             ; 0056643f
    MOV byte ptr [EBP + 0x31101bf],AL   ; 00566440 | g_CurrentLineBuffer
    MOV dword ptr [ESP],ECX             ; 00566446
    JMP 0x00566421                      ; 00566449
        ;   XREF to: 00566421 (UNCONDITIONAL_JUMP)  ; LAB_00566421
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056644b
        ;   Label: LAB_0056644b
    XOR AL,AL                           ; 0056644f
    PUSH ECX                            ; 00566451
    MOV byte ptr [EBX + 0x31101c0],AL   ; 00566452 | DAT_031101c1
    MOV EBX,dword ptr [ESP + 0x20]      ; 00566458
    PUSH EBX                            ; 0056645c
    CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0 ; 0056645d
        ;   XREF to: 005662a0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_editorPutLine_FUN_005662a0(CScript * this_ptr, int line_number)
    MOV AH,byte ptr [ESI]               ; 00566462
    ADD ESP,0x8                         ; 00566464
    CMP AH,0xa                          ; 00566467
    JNZ 0x00566487                      ; 0056646a
        ;   XREF to: 00566487 (CONDITIONAL_JUMP)  ; LAB_00566487
    MOV EDI,dword ptr [ESP + 0x4]       ; 0056646c
    PUSH EDI                            ; 00566470
    PUSH EBP                            ; 00566471
    PUSH EBX                            ; 00566472
    INC ESI                             ; 00566473
    MOV EBP,EBX                         ; 00566474
    CALL core_script.cpp_CScript_FUN_00566330 ; 00566476
        ;   XREF to: 00566330 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_00566330(CScript * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 0056647b
    LEA EAX,[EDI + 0x1]                 ; 0056647e
    XOR EBP,EBX                         ; 00566481
    MOV dword ptr [ESP + 0x4],EAX       ; 00566483
    CMP byte ptr [ESI],0x0              ; 00566487
        ;   Label: LAB_00566487
    JNZ 0x005663ca                      ; 0056648a
        ;   XREF to: 005663ca (CONDITIONAL_JUMP)  ; LAB_005663ca
    CMP dword ptr [ESP + 0x24],0x0      ; 00566490
        ;   Label: LAB_00566490
    JNZ 0x0056649f                      ; 00566495
        ;   XREF to: 0056649f (CONDITIONAL_JUMP)  ; LAB_0056649f
    ADD ESP,0x8                         ; 00566497
    POP EBP                             ; 0056649a
    POP EDI                             ; 0056649b
    POP ESI                             ; 0056649c
    POP EBX                             ; 0056649d
    RET                                 ; 0056649e
    PUSH EBP                            ; 0056649f
        ;   Label: LAB_0056649f
    MOV EDI,dword ptr [ESP + 0x8]       ; 005664a0
    PUSH EDI                            ; 005664a4
    MOV EBP,dword ptr [ESP + 0x24]      ; 005664a5
    PUSH EBP                            ; 005664a9
    CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30 ; 005664aa
        ;   XREF to: 00566b30 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_editorIndex2X_FUN_00566b30(CScript * this_ptr, int line_number, uint buffer_index)
    ADD ESP,0xc                         ; 005664af
    MOV [0x0310fd44],EAX                ; 005664b2 | g_CurrentEditingColumn
    MOV dword ptr [0x0310fd48],EDI      ; 005664b7 | g_CurrentEditingLine
    ADD ESP,0x8                         ; 005664bd
    POP EBP                             ; 005664c0
    POP EDI                             ; 005664c1
    POP ESI                             ; 005664c2
    POP EBX                             ; 005664c3
    RET                                 ; 005664c4

