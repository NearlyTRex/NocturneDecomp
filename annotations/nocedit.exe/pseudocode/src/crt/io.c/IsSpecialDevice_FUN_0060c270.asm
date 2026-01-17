; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_io.c_IsSpecialDevice_FUN_0060c270(int handle_index)
;
; Parameters:
; int              Stack[0x4]:4   handle_index
;
; XREF[3]:
;   crt_io.c_getFileTypeFlags_FUN_006088b0 at 006088e7
;   crt_stdio.c_CreateFileImpl_FUN_006090a0 at 00609275
;   crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0 at 00608eef
;
; Referenced Globals:
;   GetFileType* g_GetFileTypeFunc = 00211f00
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   SIOControlBlock* g_IOControlBlock = 00000000
;   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   GetFileType
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c270
        ;   Label: crt_io.c_IsSpecialDevice_FUN_0060c270
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060c271
    PUSH EBX                            ; 0060c275
    CALL dword ptr [0x00684ee8]         ; 0060c276 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV EDX,dword ptr [0x00685284]      ; 0060c27c | g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 0060c282
    TEST EDX,EDX                        ; 0060c285
    JZ 0x0060c2a8                       ; 0060c287
        ;   XREF to: 0060c2a8 (CONDITIONAL_JUMP)  ; LAB_0060c2a8
    PUSH EBX                            ; 0060c289
    CALL dword ptr [0x00685284]         ; 0060c28a | g_IsSpecialDeviceFuncPtr
    ADD ESP,0x4                         ; 0060c290
    TEST EAX,EAX                        ; 0060c293
    JZ 0x0060c2a8                       ; 0060c295
        ;   XREF to: 0060c2a8 (CONDITIONAL_JUMP)  ; LAB_0060c2a8
    PUSH EBX                            ; 0060c297
    CALL dword ptr [0x00684eec]         ; 0060c298 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0x1                         ; 0060c29e
    ADD ESP,0x4                         ; 0060c2a3
    POP EBX                             ; 0060c2a6
    RET                                 ; 0060c2a7
    MOV EAX,[0x0068526c]                ; 0060c2a8 | g_IOControlBlock
        ;   Label: LAB_0060c2a8
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 0060c2ad
    PUSH EAX                            ; 0060c2b0
    CALL dword ptr CS:[0x61159c]        ; 0060c2b1 | g_GetFileTypeFunc
    CMP EAX,0x2                         ; 0060c2b8
    JNZ 0x0060c2ce                      ; 0060c2bb
        ;   XREF to: 0060c2ce (CONDITIONAL_JUMP)  ; LAB_0060c2ce
    PUSH EBX                            ; 0060c2bd
    CALL dword ptr [0x00684eec]         ; 0060c2be | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    MOV EAX,0x1                         ; 0060c2c4
    ADD ESP,0x4                         ; 0060c2c9
    POP EBX                             ; 0060c2cc
    RET                                 ; 0060c2cd
    PUSH EBX                            ; 0060c2ce
        ;   Label: LAB_0060c2ce
    CALL dword ptr [0x00684eec]         ; 0060c2cf | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060c2d5
    XOR EAX,EAX                         ; 0060c2d8
    POP EBX                             ; 0060c2da
    RET                                 ; 0060c2db

