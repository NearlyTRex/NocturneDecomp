; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack void __watcallStack crt_io_c_convertFileInfo_FUN_00602264(LPWIN32_FIND_DATAA win32_data,find_t *dos_info)
;
; Parameters:
; LPWIN32_FIND_DATAA Stack[0x4]:4   win32_data
; find_t *         Stack[0x8]:4   dos_info
;
; XREF[2]:
;   crt_io.c_findFirstFileWrapper_FUN_006021f0 at 0060224f
;   crt_io.c_findNextFileWrapper_FUN_00602300 at 00602366
;
; Called Functions:
;   crt_time.c_filetime_to_time_t_FUN_00609da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00602264
        ;   Label: crt_io.c_convertFileInfo_FUN_00602264
    PUSH ESI                            ; 00602265
    PUSH EDI                            ; 00602266
    MOV ESI,dword ptr [ESP + 0x10]      ; 00602267
    MOV EBX,dword ptr [ESP + 0x14]      ; 0060226b
    MOV dword ptr [EBX],0x0             ; 0060226f
    TEST byte ptr [ESI],0x20            ; 00602275
    JZ 0x0060227d                       ; 00602278
        ;   XREF to: 0060227d (CONDITIONAL_JUMP)  ; LAB_0060227d
    OR byte ptr [EBX],0x20              ; 0060227a
    TEST byte ptr [ESI],0x10            ; 0060227d
        ;   Label: LAB_0060227d
    JZ 0x00602285                       ; 00602280
        ;   XREF to: 00602285 (CONDITIONAL_JUMP)  ; LAB_00602285
    OR byte ptr [EBX],0x10              ; 00602282
    TEST byte ptr [ESI],0x2             ; 00602285
        ;   Label: LAB_00602285
    JZ 0x0060228d                       ; 00602288
        ;   XREF to: 0060228d (CONDITIONAL_JUMP)  ; LAB_0060228d
    OR byte ptr [EBX],0x2               ; 0060228a
    TEST byte ptr [ESI],0x1             ; 0060228d
        ;   Label: LAB_0060228d
    JZ 0x00602295                       ; 00602290
        ;   XREF to: 00602295 (CONDITIONAL_JUMP)  ; LAB_00602295
    OR byte ptr [EBX],0x1               ; 00602292
    TEST byte ptr [ESI],0x4             ; 00602295
        ;   Label: LAB_00602295
    JZ 0x0060229d                       ; 00602298
        ;   XREF to: 0060229d (CONDITIONAL_JUMP)  ; LAB_0060229d
    OR byte ptr [EBX],0x4               ; 0060229a
    LEA EAX,[ESI + 0x4]                 ; 0060229d
        ;   Label: LAB_0060229d
    PUSH EAX                            ; 006022a0
    CALL crt_time.c_filetime_to_time_t_FUN_00609da0 ; 006022a1
        ;   XREF to: 00609da0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_filetime_to_time_t_FUN_00609da0(FILETIME * filetime)
    ADD ESP,0x4                         ; 006022a6
    MOV dword ptr [EBX + 0x4],EAX       ; 006022a9
    LEA EAX,[ESI + 0xc]                 ; 006022ac
    PUSH EAX                            ; 006022af
    CALL crt_time.c_filetime_to_time_t_FUN_00609da0 ; 006022b0
        ;   XREF to: 00609da0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_filetime_to_time_t_FUN_00609da0(FILETIME * filetime)
    ADD ESP,0x4                         ; 006022b5
    MOV dword ptr [EBX + 0x8],EAX       ; 006022b8
    LEA EAX,[ESI + 0x14]                ; 006022bb
    PUSH EAX                            ; 006022be
    LEA EDI,[EBX + 0x14]                ; 006022bf
    CALL crt_time.c_filetime_to_time_t_FUN_00609da0 ; 006022c2
        ;   XREF to: 00609da0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_filetime_to_time_t_FUN_00609da0(FILETIME * filetime)
    MOV dword ptr [EBX + 0xc],EAX       ; 006022c7
    ADD ESP,0x4                         ; 006022ca
    MOV EAX,dword ptr [ESI + 0x20]      ; 006022cd
    ADD ESI,0x2c                        ; 006022d0
    MOV dword ptr [EBX + 0x10],EAX      ; 006022d3
    PUSH EDI                            ; 006022d6
    MOV AL,byte ptr [ESI]               ; 006022d7
        ;   Label: LAB_006022d7
    MOV byte ptr [EDI],AL               ; 006022d9
    CMP AL,0x0                          ; 006022db
    JZ 0x006022ef                       ; 006022dd
        ;   XREF to: 006022ef (CONDITIONAL_JUMP)  ; LAB_006022ef
    MOV AL,byte ptr [ESI + 0x1]         ; 006022df
    ADD ESI,0x2                         ; 006022e2
    MOV byte ptr [EDI + 0x1],AL         ; 006022e5
    ADD EDI,0x2                         ; 006022e8
    CMP AL,0x0                          ; 006022eb
    JNZ 0x006022d7                      ; 006022ed
        ;   XREF to: 006022d7 (CONDITIONAL_JUMP)  ; LAB_006022d7
    POP EDI                             ; 006022ef
        ;   Label: LAB_006022ef
    POP EDI                             ; 006022f0
    POP ESI                             ; 006022f1
    POP EBX                             ; 006022f2
    RET                                 ; 006022f3

