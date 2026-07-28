; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_004394f0(CLZWDictionary *this_ptr,int code,int parent_index)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   code
; int              Stack[0xc]:4   parent_index
;
; XREF[3]:
;   support_codec.cpp_CLZWCompress_process_FUN_004398c0 at 00439962
;   support_codec.cpp_CLZWDecompress_processBuffer_FUN_00439b30 at 00439b73
;   support_codec.cpp_CLZWDecompress_process_FUN_00439a70 at 00439a9c
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_initTable_FUN_00439450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004394f0
        ;   Label: support_codec.cpp_CLZWDictionary_addNode_FUN_004394f0
    PUSH EBP                            ; 004394f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004394f2
    MOV EBX,dword ptr [ESP + 0x14]      ; 004394f6
    MOV ECX,dword ptr [EAX]             ; 004394fa
    MOV EDX,dword ptr [EAX + 0xc]       ; 004394fc
    CMP EDX,ECX                         ; 004394ff
    JGE 0x0043956f                      ; 00439501
        ;   XREF to: 0043956f (CONDITIONAL_JUMP)  ; LAB_0043956f
    DEC EDX                             ; 00439503
    TEST dword ptr [EAX + 0xc],EDX      ; 00439504
    JNZ 0x0043950c                      ; 00439507
        ;   XREF to: 0043950c (CONDITIONAL_JUMP)  ; LAB_0043950c
    INC dword ptr [EAX + 0x8]           ; 00439509
    PUSH ESI                            ; 0043950c
        ;   Label: LAB_0043950c
    MOV EDX,dword ptr [EAX + 0xc]       ; 0043950d
    MOV ECX,dword ptr [EAX + 0x10]      ; 00439510
    SHL EDX,0x4                         ; 00439513
    ADD EDX,ECX                         ; 00439516
    MOV ECX,dword ptr [ESP + 0x14]      ; 00439518
    MOV dword ptr [EDX],ECX             ; 0043951c
    MOV EDX,dword ptr [EAX + 0xc]       ; 0043951e
    MOV ECX,dword ptr [EAX + 0x10]      ; 00439521
    SHL EDX,0x4                         ; 00439524
    MOV dword ptr [ECX + EDX*0x1 + 0x4],EBX ; 00439527
    MOV ECX,dword ptr [EAX + 0xc]       ; 0043952b
    MOV EDX,dword ptr [EAX + 0x10]      ; 0043952e
    SHL ECX,0x4                         ; 00439531
    MOV dword ptr [ECX + EDX*0x1 + 0x8],0xffffffff ; 00439534
    MOV ECX,EBX                         ; 0043953c
    MOV EDX,dword ptr [EAX + 0x10]      ; 0043953e
    MOV EBX,dword ptr [EAX + 0xc]       ; 00439541
    SHL ECX,0x4                         ; 00439544
    SHL EBX,0x4                         ; 00439547
    LEA ESI,[EDX + ECX*0x1]             ; 0043954a
    ADD EBX,EDX                         ; 0043954d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043954f
    MOV dword ptr [EBX + 0xc],EDX       ; 00439552
    MOV EDX,dword ptr [EAX + 0x10]      ; 00439555
    ADD ECX,EDX                         ; 00439558
    MOV EDX,dword ptr [EAX + 0xc]       ; 0043955a
    MOV dword ptr [ECX + 0x8],EDX       ; 0043955d
    MOV EBP,dword ptr [EAX + 0xc]       ; 00439560
    INC EBP                             ; 00439563
    XOR EDX,EDX                         ; 00439564
    MOV dword ptr [EAX + 0xc],EBP       ; 00439566
    POP ESI                             ; 00439569
    MOV EAX,EDX                         ; 0043956a
    POP EBP                             ; 0043956c
    POP EBX                             ; 0043956d
    RET                                 ; 0043956e
    PUSH EAX                            ; 0043956f
        ;   Label: LAB_0043956f
    CALL support_codec.cpp_CLZWDictionary_initTable_FUN_00439450 ; 00439570
        ;   XREF to: 00439450 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_initTable_FUN_00439450(CLZWDictionary * this_ptr)
    MOV EDX,0x1                         ; 00439575
    ADD ESP,0x4                         ; 0043957a
    MOV EAX,EDX                         ; 0043957d
    POP EBP                             ; 0043957f
    POP EBX                             ; 00439580
    RET                                 ; 00439581

