; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl HANDLE crt_stdio.c_CreateFileImpl_FUN_006090a0(char * filename, dword access_mode, dword share_mode, va_list_t * extra_args)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; dword            Stack[0x8]:4   access_mode
; dword            Stack[0xc]:4   share_mode
; va_list_t *      Stack[0x10]:4   extra_args
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; typedef DWORD ulong Stack[-0x24]:4  creation_disposition
; typedef DWORD ulong Stack[-0x20]:4  flags_and_attributes
; typedef DWORD ulong Stack[-0x1c]:4  share_mode_windows
; typedef DWORD ulong Stack[-0x18]:4  desired_access
; typedef DWORD ulong Stack[-0x14]:4  extra_parameter
;
; XREF[1]:
;   crt_stdio.c_CreateFileVariadic_FUN_00609074 at 00609091
;
; Referenced Globals:
;   CloseHandle* CloseHandle = 00211c38
;   CreateFileA* PTR_CreateFileA_00611510 = 00211c6a
;   TerminatedCString s_con_006590a0
;   undefined4 DAT_00684ed0
;   REGISTER_HANDLE_FUNC* PTR_crt_sync.c_RegisterHandle_FUN_00602438_00684ef0 = 00602438
;   uint g_MaxHandleCount = 0x14
;   undefined4 DAT_0068528c
;   undefined4 DAT_006854ec
;
; Called Functions:
;   CloseHandle
;   CreateFileA
;   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
;   crt_errno.c_setErrno_FUN_00602790
;   crt_io.c_CheckFileHandleAvailability_FUN_00608940
;   crt_io.c_ConvertAccessMode_FUN_0060c850
;   crt_io.c_ConvertCreationDisposition_FUN_0060c894
;   crt_io.c_CreateFallbackHandle_FUN_00608b88
;   crt_io.c_IsSpecialDevice_FUN_0060c270
;   crt_io.c_register_handler_wrapper_FUN_00602438
;   crt_io.c_setFileDescriptorFlags_FUN_00608908
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006090a0
        ;   Label: crt_stdio.c_CreateFileImpl_FUN_006090a0
    PUSH ESI                            ; 006090a1
    PUSH EDI                            ; 006090a2
    PUSH EBP                            ; 006090a3
    SUB ESP,0x18                        ; 006090a4
    MOV EDI,dword ptr [ESP + 0x38]      ; 006090a7
    CALL crt_io.c_CheckFileHandleAvailability_FUN_00608940 ; 006090ab | int crt_io.c_CheckFileHandleAvailability_FUN_00608940()
        ;   XREF to: 00608940 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 006090b0
    JZ 0x006090c8                       ; 006090b2 | LAB_006090c8
        ;   XREF to: 006090c8 (CONDITIONAL_JUMP)
    PUSH 0xb                            ; 006090b4
    CALL crt_errno.c_setErrno_FUN_00602790 ; 006090b6 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    MOV EAX,0xffffffff                  ; 006090bb
    ADD ESP,0x4                         ; 006090c0
    JMP 0x006092d9                      ; 006090c3 | LAB_006092d9
        ;   XREF to: 006092d9 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x14]                ; 006090c8
        ;   Label: LAB_006090c8
    PUSH EAX                            ; 006090cc
    LEA EAX,[ESP + 0x14]                ; 006090cd
    MOV ESI,dword ptr [ESP + 0x34]      ; 006090d1
    PUSH EAX                            ; 006090d5
    AND ESI,0x7                         ; 006090d6
    PUSH ESI                            ; 006090d9
    CALL crt_io.c_ConvertAccessMode_FUN_0060c850 ; 006090da | void crt_io.c_ConvertAccessMode_FUN_0060c850(int access_mode, DWORD * desired_access, DWORD * share_mode)
        ;   XREF to: 0060c850 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 006090df
    LEA EAX,[ESP + 0xc]                 ; 006090e2
    PUSH EAX                            ; 006090e6
    MOV EAX,dword ptr [ESP + 0x38]      ; 006090e7
    OR EAX,ESI                          ; 006090eb
    PUSH EAX                            ; 006090ed
    MOV EBP,0x80                        ; 006090ee
    CALL crt_io.c_ConvertCreationDisposition_FUN_0060c894 ; 006090f3 | void crt_io.c_ConvertCreationDisposition_FUN_0060c894(DWORD mode_flags, DWORD * creation_disposition)
        ;   XREF to: 0060c894 (UNCONDITIONAL_CALL)
    MOV EDX,0xc                         ; 006090f8
    ADD ESP,0x8                         ; 006090fd
    XOR ECX,ECX                         ; 00609100
    MOV AH,byte ptr [ESP + 0x30]        ; 00609102
    MOV dword ptr [ESP],EDX             ; 00609106
    MOV dword ptr [ESP + 0x4],ECX       ; 00609109
    TEST AH,0x80                        ; 0060910d
    SETZ AL                             ; 00609110
    AND EAX,0xff                        ; 00609113
    MOV dword ptr [ESP + 0x8],EAX       ; 00609118
    CMP dword ptr [0x0068528c],0x0      ; 0060911c | undefined4 DAT_0068528c
    JZ 0x00609164                       ; 00609123 | LAB_00609164
        ;   XREF to: 00609164 (CONDITIONAL_JUMP)
    PUSH 0x6590a0                       ; 00609125 | = "con" | s_con_006590a0 = con
    MOV EDX,dword ptr [ESP + 0x30]      ; 0060912a
    PUSH EDX                            ; 0060912e
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0060912f | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00609134
    TEST EAX,EAX                        ; 00609137
    JNZ 0x00609164                      ; 00609139 | LAB_00609164
        ;   XREF to: 00609164 (CONDITIONAL_JUMP)
    CALL crt_io.c_CreateFallbackHandle_FUN_00608b88 ; 0060913b | HANDLE crt_io.c_CreateFallbackHandle_FUN_00608b88()
        ;   XREF to: 00608b88 (UNCONDITIONAL_CALL)
    PUSH EAX                            ; 00609140
    CALL dword ptr [0x00684ef0]         ; 00609141 | REGISTER_HANDLE_FUNC * PTR_crt_sync.c_RegisterHandle_FUN_00602438_00684ef0
    ADD ESP,0x4                         ; 00609147
    PUSH -0x1                           ; 0060914a
    PUSH EAX                            ; 0060914c
    PUSH 0x0                            ; 0060914d
    MOV EBX,0x2000                      ; 0060914f
    MOV EBP,EAX                         ; 00609154
    CALL dword ptr [0x0068528c]         ; 00609156 | undefined4 DAT_0068528c
    ADD ESP,0xc                         ; 0060915c
    JMP 0x00609286                      ; 0060915f | LAB_00609286
        ;   XREF to: 00609286 (UNCONDITIONAL_JUMP)
    MOV DL,byte ptr [ESP + 0x30]        ; 00609164
        ;   Label: LAB_00609164
    TEST DL,0x20                        ; 00609168
    JZ 0x006091cf                       ; 0060916b | LAB_006091cf
        ;   XREF to: 006091cf (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EDI]             ; 0060916d
    ADD EBX,0x4                         ; 0060916f
    MOV dword ptr [EDI],EBX             ; 00609172
    MOV EAX,dword ptr [EBX + -0x4]      ; 00609174
    MOV dword ptr [ESP + 0x14],EAX      ; 00609177
    MOV dword ptr [EDI],0x0             ; 0060917b
    MOV EAX,[0x006854ec]                ; 00609181 | undefined4 DAT_006854ec
    MOV ECX,dword ptr [ESP + 0x14]      ; 00609186
    NOT EAX                             ; 0060918a
    AND ECX,EAX                         ; 0060918c
    MOV dword ptr [ESP + 0x14],ECX      ; 0060918e
    TEST byte ptr [ESP + 0x15],0x1      ; 00609192
    JZ 0x006091a5                       ; 00609197 | LAB_006091a5
        ;   XREF to: 006091a5 (CONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0x14],0x80     ; 00609199
    JNZ 0x006091a5                      ; 0060919e | LAB_006091a5
        ;   XREF to: 006091a5 (CONDITIONAL_JUMP)
    MOV EBP,0x1                         ; 006091a0
    TEST byte ptr [ESP + 0x31],0x4      ; 006091a5
        ;   Label: LAB_006091a5
    JZ 0x006091b5                       ; 006091aa | LAB_006091b5
        ;   XREF to: 006091b5 (CONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 006091ac
    MOV EAX,EBX                         ; 006091b1
    JMP 0x006091e0                      ; 006091b3 | LAB_006091e0
        ;   XREF to: 006091e0 (UNCONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0x30],0x40     ; 006091b5
        ;   Label: LAB_006091b5
    JZ 0x006091c8                       ; 006091ba | LAB_006091c8
        ;   XREF to: 006091c8 (CONDITIONAL_JUMP)
    MOV EBX,0x2                         ; 006091bc
    MOV EAX,0x1                         ; 006091c1
    JMP 0x006091e0                      ; 006091c6 | LAB_006091e0
        ;   XREF to: 006091e0 (UNCONDITIONAL_JUMP)
    MOV EBX,0x4                         ; 006091c8
        ;   Label: LAB_006091c8
    JMP 0x006091db                      ; 006091cd | LAB_006091db
        ;   XREF to: 006091db (UNCONDITIONAL_JUMP)
    TEST DL,0x40                        ; 006091cf
        ;   Label: LAB_006091cf
    JZ 0x006091db                       ; 006091d2 | LAB_006091db
        ;   XREF to: 006091db (CONDITIONAL_JUMP)
    MOV EAX,0x5                         ; 006091d4
    JMP 0x006091e0                      ; 006091d9 | LAB_006091e0
        ;   XREF to: 006091e0 (UNCONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 006091db
        ;   Label: LAB_006091db
    PUSH 0x0                            ; 006091e0
        ;   Label: LAB_006091e0
    PUSH EBP                            ; 006091e2
    PUSH EAX                            ; 006091e3
    LEA EAX,[ESP + 0xc]                 ; 006091e4
    PUSH EAX                            ; 006091e8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 006091e9
    PUSH EDI                            ; 006091ed
    MOV EAX,dword ptr [ESP + 0x24]      ; 006091ee
    PUSH EAX                            ; 006091f2
    MOV EDX,dword ptr [ESP + 0x44]      ; 006091f3
    PUSH EDX                            ; 006091f7
    CALL dword ptr CS:[0x611510]        ; 006091f8 | CreateFileA * PTR_CreateFileA_00611510
    MOV EDI,EAX                         ; 006091ff
    CMP EAX,-0x1                        ; 00609201
    JNZ 0x0060923d                      ; 00609204 | LAB_0060923d
        ;   XREF to: 0060923d (CONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0x30],0x20     ; 00609206
    JZ 0x0060922b                       ; 0060920b | LAB_0060922b
        ;   XREF to: 0060922b (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0060920d
    PUSH EBP                            ; 0060920f
    PUSH EBX                            ; 00609210
    PUSH 0x0                            ; 00609211
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00609213
    PUSH EBX                            ; 00609217
    MOV ECX,dword ptr [ESP + 0x24]      ; 00609218
    PUSH ECX                            ; 0060921c
    MOV EDI,dword ptr [ESP + 0x44]      ; 0060921d
    PUSH EDI                            ; 00609221
    CALL dword ptr CS:[0x611510]        ; 00609222 | CreateFileA * PTR_CreateFileA_00611510
    MOV EDI,EAX                         ; 00609229
    CMP EDI,-0x1                        ; 0060922b
        ;   Label: LAB_0060922b
    JNZ 0x0060923d                      ; 0060922e | LAB_0060923d
        ;   XREF to: 0060923d (CONDITIONAL_JUMP)
    CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc ; 00609230 | DWORD crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc()
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00609235
    POP EBP                             ; 00609238
    POP EDI                             ; 00609239
    POP ESI                             ; 0060923a
    POP EBX                             ; 0060923b
    RET                                 ; 0060923c
    PUSH EDI                            ; 0060923d
        ;   Label: LAB_0060923d
    CALL dword ptr [0x00684ef0]         ; 0060923e | REGISTER_HANDLE_FUNC * PTR_crt_sync.c_RegisterHandle_FUN_00602438_00684ef0
    XOR EBX,EBX                         ; 00609244
    MOV EDX,dword ptr [0x00685214]      ; 00609246 | uint g_MaxHandleCount
    ADD ESP,0x4                         ; 0060924c
    MOV EBP,EAX                         ; 0060924f
    CMP EAX,EDX                         ; 00609251
    JC 0x00609274                       ; 00609253 | LAB_00609274
        ;   XREF to: 00609274 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00609255
    CALL dword ptr CS:[0x611504]        ; 00609256 | CloseHandle * CloseHandle
    PUSH 0x5                            ; 0060925d
    CALL crt_errno.c_setErrno_FUN_00602790 ; 0060925f | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    MOV EAX,0xffffffff                  ; 00609264
    ADD ESP,0x4                         ; 00609269
    ADD ESP,0x18                        ; 0060926c
    POP EBP                             ; 0060926f
    POP EDI                             ; 00609270
    POP ESI                             ; 00609271
    POP EBX                             ; 00609272
    RET                                 ; 00609273
    PUSH EAX                            ; 00609274
        ;   Label: LAB_00609274
    CALL crt_io.c_IsSpecialDevice_FUN_0060c270 ; 00609275 | int crt_io.c_IsSpecialDevice_FUN_0060c270(int handle_index)
        ;   XREF to: 0060c270 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060927a
    TEST EAX,EAX                        ; 0060927d
    JZ 0x00609286                       ; 0060927f | LAB_00609286
        ;   XREF to: 00609286 (CONDITIONAL_JUMP)
    MOV EBX,0x2000                      ; 00609281
    CMP ESI,0x2                         ; 00609286
        ;   Label: LAB_00609286
    JNZ 0x00609290                      ; 00609289 | LAB_00609290
        ;   XREF to: 00609290 (CONDITIONAL_JUMP)
    OR BL,0x3                           ; 0060928b
    JMP 0x006092a1                      ; 0060928e | LAB_006092a1
        ;   XREF to: 006092a1 (UNCONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 00609290
        ;   Label: LAB_00609290
    JNZ 0x00609299                      ; 00609292 | LAB_00609299
        ;   XREF to: 00609299 (CONDITIONAL_JUMP)
    OR BL,0x1                           ; 00609294
    JMP 0x006092a1                      ; 00609297 | LAB_006092a1
        ;   XREF to: 006092a1 (UNCONDITIONAL_JUMP)
    CMP ESI,0x1                         ; 00609299
        ;   Label: LAB_00609299
    JNZ 0x006092a1                      ; 0060929c | LAB_006092a1
        ;   XREF to: 006092a1 (CONDITIONAL_JUMP)
    OR BL,0x2                           ; 0060929e
    TEST byte ptr [ESP + 0x30],0x10     ; 006092a1
        ;   Label: LAB_006092a1
    JZ 0x006092ab                       ; 006092a6 | LAB_006092ab
        ;   XREF to: 006092ab (CONDITIONAL_JUMP)
    OR BL,0x80                          ; 006092a8
    MOV EAX,EBX                         ; 006092ab
        ;   Label: LAB_006092ab
    MOV DL,byte ptr [ESP + 0x31]        ; 006092ad
    OR AL,0x40                          ; 006092b1
    TEST DL,0x3                         ; 006092b3
    JZ 0x006092bf                       ; 006092b6 | LAB_006092bf
        ;   XREF to: 006092bf (CONDITIONAL_JUMP)
    TEST DL,0x2                         ; 006092b8
    JZ 0x006092cd                       ; 006092bb | LAB_006092cd
        ;   XREF to: 006092cd (CONDITIONAL_JUMP)
    JMP 0x006092cb                      ; 006092bd | LAB_006092cb
        ;   XREF to: 006092cb (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x00684ed0],0x200    ; 006092bf | undefined4 DAT_00684ed0
        ;   Label: LAB_006092bf
    JNZ 0x006092cd                      ; 006092c9 | LAB_006092cd
        ;   XREF to: 006092cd (CONDITIONAL_JUMP)
    MOV EBX,EAX                         ; 006092cb
        ;   Label: LAB_006092cb
    PUSH EBX                            ; 006092cd
        ;   Label: LAB_006092cd
    PUSH EBP                            ; 006092ce
    CALL crt_io.c_setFileDescriptorFlags_FUN_00608908 ; 006092cf | void crt_io.c_setFileDescriptorFlags_FUN_00608908(int file_handle_index, uint flags)
        ;   XREF to: 00608908 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 006092d4
    MOV EAX,EBP                         ; 006092d7
    ADD ESP,0x18                        ; 006092d9
        ;   Label: LAB_006092d9
    POP EBP                             ; 006092dc
    POP EDI                             ; 006092dd
    POP ESI                             ; 006092de
    POP EBX                             ; 006092df
    RET                                 ; 006092e0

