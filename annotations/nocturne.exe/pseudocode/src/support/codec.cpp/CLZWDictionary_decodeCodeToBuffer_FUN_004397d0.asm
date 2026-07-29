; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_004397d0(CLZWDictionary *this_ptr,int code,char **buffer_ptr_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   code
; char * *         Stack[0xc]:4   buffer_ptr_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_codec.cpp_CLZWDecompress_processBuffer_FUN_00439b30 at 00439b61
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004397d0
        ;   Label: support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_004397d0
    PUSH ESI                            ; 004397d1
    PUSH EDI                            ; 004397d2
    PUSH EBP                            ; 004397d3
    SUB ESP,0x4                         ; 004397d4
    MOV ECX,dword ptr [ESP + 0x18]      ; 004397d7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004397db
    MOV EAX,EBX                         ; 004397df
    XOR ESI,ESI                         ; 004397e1
    SHL EAX,0x4                         ; 004397e3
        ;   Label: LAB_004397e3
    MOV EDX,dword ptr [ECX + 0x10]      ; 004397e6
    ADD EAX,EDX                         ; 004397e9
    INC ESI                             ; 004397eb
    MOV EDX,dword ptr [EAX]             ; 004397ec
    MOV EAX,dword ptr [EAX + 0x4]       ; 004397ee
    MOV dword ptr [ESP],EDX             ; 004397f1
    TEST EAX,EAX                        ; 004397f4
    JGE 0x004397e3                      ; 004397f6
        ;   XREF to: 004397e3 (CONDITIONAL_JUMP)  ; LAB_004397e3
    MOV EDX,EBX                         ; 004397f8
    MOV EAX,ESI                         ; 004397fa
    SHL EDX,0x4                         ; 004397fc
        ;   Label: LAB_004397fc
    MOV EBX,dword ptr [ECX + 0x10]      ; 004397ff
    LEA EBP,[EBX + EDX*0x1]             ; 00439802
    MOV EBX,dword ptr [ESP + 0x20]      ; 00439805
    DEC EAX                             ; 00439809
    MOV EBX,dword ptr [EBX]             ; 0043980a
    LEA EDI,[EBX + EAX*0x1]             ; 0043980c
    MOV BL,byte ptr [EBP]               ; 0043980f
    MOV byte ptr [EDI],BL               ; 00439812
    MOV EBX,dword ptr [ECX + 0x10]      ; 00439814
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x4] ; 00439817
    TEST EDX,EDX                        ; 0043981b
    JGE 0x004397fc                      ; 0043981d
        ;   XREF to: 004397fc (CONDITIONAL_JUMP)  ; LAB_004397fc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043981f
    ADD dword ptr [EAX],ESI             ; 00439823
    MOV EAX,dword ptr [ESP]             ; 00439825
    ADD ESP,0x4                         ; 00439828
    POP EBP                             ; 0043982b
    POP EDI                             ; 0043982c
    POP ESI                             ; 0043982d
    POP EBX                             ; 0043982e
    RET                                 ; 0043982f

