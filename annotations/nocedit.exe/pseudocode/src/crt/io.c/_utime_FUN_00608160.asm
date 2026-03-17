; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__utime_FUN_00608160(char *filename,_utimbuf *timestamps)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; _utimbuf *       Stack[0x8]:4   timestamps
;
; XREF[1]:
;   crt_io.c__utime_00600c1e at 00600c1e
;
; Referenced Globals:
;   CLOSE_HANDLE_FUNC* g_CloseHandleFunc = 00211c38
;   CREATE_FILE_A_FUNC* g_CreateFileAFunc = 00211c6a
;   GET_FILE_TIME_FUNC* g_GetFileTimeFunc = 00211ef2
;   LOCAL_FILE_TIME_TO_FILE_TIME_FUNC* g_LocalFileTimeToFileTimeFunc = 0021206c
;   SET_FILE_TIME_FUNC* g_SetFileTimeFunc = 002121c8
;   SYSTEM_TIME_TO_FILE_TIME_FUNC* g_SystemTimeToFileTimeFunc = 00212230
;
; Called Functions:
;   CloseHandle
;   CreateFileA
;   crt_errno.c___set_errno_FUN_006083fc
;   crt_time.c__localtime_FUN_00600288
;   crt_time.c__time_FUN_006001f0
;   GetFileTime
;   LocalFileTimeToFileTime
;   SetFileTime
;   SystemTimeToFileTime
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608160
        ;   Label: crt_io.c__utime_FUN_00608160
    PUSH ESI                            ; 00608161
    PUSH EDI                            ; 00608162
    SUB ESP,0x48                        ; 00608163
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00608166
    PUSH 0x0                            ; 0060816a
    PUSH 0x0                            ; 0060816c
    PUSH 0x3                            ; 0060816e
    PUSH 0x0                            ; 00608170
    PUSH 0x0                            ; 00608172
    PUSH 0xc0000000                     ; 00608174
    MOV EDX,dword ptr [ESP + 0x70]      ; 00608179
    PUSH EDX                            ; 0060817d
    CALL dword ptr CS:[0x611510]        ; 0060817e | g_CreateFileAFunc
    MOV EBX,EAX                         ; 00608185
    MOV ESI,EAX                         ; 00608187
    CMP EAX,-0x1                        ; 00608189
    JNZ 0x00608198                      ; 0060818c
        ;   XREF to: 00608198 (CONDITIONAL_JUMP)  ; LAB_00608198
    CALL crt_errno.c___set_errno_FUN_006083fc ; 0060818e
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_006083fc()
    JMP 0x006082cf                      ; 00608193
        ;   XREF to: 006082cf (UNCONDITIONAL_JUMP)  ; LAB_006082cf
    LEA EAX,[ESP + 0x20]                ; 00608198
        ;   Label: LAB_00608198
    PUSH EAX                            ; 0060819c
    LEA EAX,[ESP + 0x44]                ; 0060819d
    PUSH EAX                            ; 006081a1
    LEA EAX,[ESP + 0x38]                ; 006081a2
    PUSH EAX                            ; 006081a6
    PUSH EBX                            ; 006081a7
    CALL dword ptr CS:[0x611598]        ; 006081a8 | g_GetFileTimeFunc
    TEST EAX,EAX                        ; 006081af
    JNZ 0x006081c7                      ; 006081b1
        ;   XREF to: 006081c7 (CONDITIONAL_JUMP)  ; LAB_006081c7
    PUSH EBX                            ; 006081b3
    CALL dword ptr CS:[0x611504]        ; 006081b4 | g_CloseHandleFunc
    CALL crt_errno.c___set_errno_FUN_006083fc ; 006081bb
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_006083fc()
    ADD ESP,0x48                        ; 006081c0
    POP EDI                             ; 006081c3
    POP ESI                             ; 006081c4
    POP EBX                             ; 006081c5
    RET                                 ; 006081c6
    TEST EDI,EDI                        ; 006081c7
        ;   Label: LAB_006081c7
    JNZ 0x006081e0                      ; 006081c9
        ;   XREF to: 006081e0 (CONDITIONAL_JUMP)  ; LAB_006081e0
    PUSH EDI                            ; 006081cb
    CALL crt_time.c__time_FUN_006001f0  ; 006081cc
        ;   XREF to: 006001f0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c__time_FUN_006001f0(int * time)
    ADD ESP,0x4                         ; 006081d1
    LEA EDI,[ESP + 0x38]                ; 006081d4
    MOV dword ptr [ESP + 0x3c],EAX      ; 006081d8
    MOV dword ptr [ESP + 0x38],EAX      ; 006081dc
    LEA EAX,[EDI + 0x4]                 ; 006081e0
        ;   Label: LAB_006081e0
    PUSH EAX                            ; 006081e3
    CALL crt_time.c__localtime_FUN_00600288 ; 006081e4
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_00600288(time_t * timer)
    MOV EDX,EAX                         ; 006081e9
    MOV AX,word ptr [EAX + 0x14]        ; 006081eb
    ADD ESP,0x4                         ; 006081ef
    ADD EAX,0x76c                       ; 006081f2
    MOV word ptr [ESP + 0x10],AX        ; 006081f7
    MOV word ptr [ESP],AX               ; 006081fc
    MOV AX,word ptr [EDX + 0x10]        ; 00608200
    INC EAX                             ; 00608204
    MOV word ptr [ESP + 0x12],AX        ; 00608205
    MOV word ptr [ESP + 0x2],AX         ; 0060820a
    MOV AX,word ptr [EDX + 0xc]         ; 0060820f
    MOV word ptr [ESP + 0x16],AX        ; 00608213
    MOV word ptr [ESP + 0x6],AX         ; 00608218
    MOV AX,word ptr [EDX + 0x8]         ; 0060821d
    MOV word ptr [ESP + 0x18],AX        ; 00608221
    MOV word ptr [ESP + 0x8],AX         ; 00608226
    MOV AX,word ptr [EDX + 0x4]         ; 0060822b
    MOV word ptr [ESP + 0x1a],AX        ; 0060822f
    MOV word ptr [ESP + 0xa],AX         ; 00608234
    MOV AX,word ptr [EDX]               ; 00608239
    MOV word ptr [ESP + 0x1c],AX        ; 0060823c
    MOV word ptr [ESP + 0xc],AX         ; 00608241
    LEA EAX,[ESP + 0x28]                ; 00608246
    PUSH EAX                            ; 0060824a
    LEA EAX,[ESP + 0x4]                 ; 0060824b
    XOR EDX,EDX                         ; 0060824f
    PUSH EAX                            ; 00608251
    MOV word ptr [ESP + 0x26],DX        ; 00608252
    MOV word ptr [ESP + 0x16],DX        ; 00608257
    CALL dword ptr CS:[0x611648]        ; 0060825c | g_SystemTimeToFileTimeFunc
    LEA EAX,[ESP + 0x20]                ; 00608263
    PUSH EAX                            ; 00608267
    LEA EAX,[ESP + 0x2c]                ; 00608268
    PUSH EAX                            ; 0060826c
    CALL dword ptr CS:[0x6115ec]        ; 0060826d | g_LocalFileTimeToFileTimeFunc
    LEA EAX,[ESP + 0x28]                ; 00608274
    PUSH EAX                            ; 00608278
    LEA EAX,[ESP + 0x14]                ; 00608279
    PUSH EAX                            ; 0060827d
    CALL dword ptr CS:[0x611648]        ; 0060827e | g_SystemTimeToFileTimeFunc
    LEA EAX,[ESP + 0x40]                ; 00608285
    PUSH EAX                            ; 00608289
    LEA EAX,[ESP + 0x2c]                ; 0060828a
    PUSH EAX                            ; 0060828e
    CALL dword ptr CS:[0x6115ec]        ; 0060828f | g_LocalFileTimeToFileTimeFunc
    LEA EAX,[ESP + 0x20]                ; 00608296
    PUSH EAX                            ; 0060829a
    LEA EAX,[ESP + 0x44]                ; 0060829b
    PUSH EAX                            ; 0060829f
    LEA EAX,[ESP + 0x38]                ; 006082a0
    PUSH EAX                            ; 006082a4
    PUSH ESI                            ; 006082a5
    CALL dword ptr CS:[0x611630]        ; 006082a6 | g_SetFileTimeFunc
    TEST EAX,EAX                        ; 006082ad
    JNZ 0x006082c5                      ; 006082af
        ;   XREF to: 006082c5 (CONDITIONAL_JUMP)  ; LAB_006082c5
    PUSH ESI                            ; 006082b1
    CALL dword ptr CS:[0x611504]        ; 006082b2 | g_CloseHandleFunc
    CALL crt_errno.c___set_errno_FUN_006083fc ; 006082b9
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_006083fc()
    ADD ESP,0x48                        ; 006082be
    POP EDI                             ; 006082c1
    POP ESI                             ; 006082c2
    POP EBX                             ; 006082c3
    RET                                 ; 006082c4
    PUSH ESI                            ; 006082c5
        ;   Label: LAB_006082c5
    CALL dword ptr CS:[0x611504]        ; 006082c6 | g_CloseHandleFunc
    XOR EAX,EAX                         ; 006082cd
    ADD ESP,0x48                        ; 006082cf
        ;   Label: LAB_006082cf
    POP EDI                             ; 006082d2
    POP ESI                             ; 006082d3
    POP EBX                             ; 006082d4
    RET                                 ; 006082d5

