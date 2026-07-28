; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CLZWCompress_process_FUN_004398c0(CLZWCompress *this_ptr,_istream *istream,int *byte_count,_ostream *ostream)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
; _istream *       Stack[0x8]:4   istream
; int *            Stack[0xc]:4   byte_count
; _ostream *       Stack[0x10]:4   ostream
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004a3b90 at 004a3f42
;
; Called Functions:
;   crt_iostream.cpp_istream_get_FUN_00564c53
;   support_codec.cpp_CLZWDictionary_addNode_FUN_004394f0
;   support_codec.cpp_CLZWDictionary_findCode_FUN_004394b0
;   support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_004396d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004398c0
        ;   Label: support_codec.cpp_CLZWCompress_process_FUN_004398c0
    PUSH ESI                            ; 004398c1
    PUSH EDI                            ; 004398c2
    PUSH EBP                            ; 004398c3
    SUB ESP,0x8                         ; 004398c4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004398c7
    LEA EAX,[EBX + 0x18]                ; 004398cb
    MOV EBP,dword ptr [ESP + 0x24]      ; 004398ce
    MOV dword ptr [ESP],EAX             ; 004398d2
    LEA EDI,[EBX + 0x4]                 ; 004398d5
    CMP dword ptr [EBP],0x1             ; 004398d8
        ;   Label: LAB_004398d8
    JGE 0x00439907                      ; 004398dc
        ;   XREF to: 00439907 (CONDITIONAL_JUMP)  ; LAB_00439907
    MOV EAX,0xffffffff                  ; 004398de
        ;   Label: LAB_004398de
    TEST EAX,EAX                        ; 004398e3
        ;   Label: LAB_004398e3
    JL 0x00439991                       ; 004398e5
        ;   XREF to: 00439991 (CONDITIONAL_JUMP)  ; LAB_00439991
    MOV ESI,dword ptr [EBX + 0x28]      ; 004398eb
    AND ESI,EAX                         ; 004398ee
    MOV EAX,dword ptr [EBX + 0x30]      ; 004398f0
    PUSH EAX                            ; 004398f3
    PUSH ESI                            ; 004398f4
    PUSH EDI                            ; 004398f5
    CALL support_codec.cpp_CLZWDictionary_findCode_FUN_004394b0 ; 004398f6
        ;   XREF to: 004394b0 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_findCode_FUN_004394b0(CLZWDictionary * this_ptr, int search_code, int start_index)
    ADD ESP,0xc                         ; 004398fb
    TEST EAX,EAX                        ; 004398fe
    JL 0x0043993e                       ; 00439900
        ;   XREF to: 0043993e (CONDITIONAL_JUMP)  ; LAB_0043993e
    MOV dword ptr [EBX + 0x30],EAX      ; 00439902
    JMP 0x004398d8                      ; 00439905
        ;   XREF to: 004398d8 (UNCONDITIONAL_JUMP)  ; LAB_004398d8
    LEA EAX,[ESP + 0x4]                 ; 00439907
        ;   Label: LAB_00439907
    PUSH EAX                            ; 0043990b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043990c
    PUSH ECX                            ; 00439910
    CALL crt_iostream.cpp_istream_get_FUN_00564c53 ; 00439911
        ;   XREF to: 00564c53 (UNCONDITIONAL_CALL)  ; _istream * crt_iostream.cpp_istream_get_FUN_00564c53(_istream * this_ptr, char * c)
    ADD ESP,0x8                         ; 00439916
    MOV EAX,dword ptr [ESP + 0x20]      ; 00439919
    MOV EAX,dword ptr [EAX]             ; 0043991d
    MOV ESI,dword ptr [ESP + 0x20]      ; 0043991f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00439923
    LEA EAX,[ESI + EDX*0x1]             ; 00439926
    CMP dword ptr [EAX + 0x10],0x0      ; 00439929
    JNZ 0x004398de                      ; 0043992d
        ;   XREF to: 004398de (CONDITIONAL_JUMP)  ; LAB_004398de
    MOV ESI,dword ptr [EBP]             ; 0043992f
    DEC ESI                             ; 00439932
    XOR EAX,EAX                         ; 00439933
    MOV dword ptr [EBP],ESI             ; 00439935
    MOV AL,byte ptr [ESP + 0x4]         ; 00439938
    JMP 0x004398e3                      ; 0043993c
        ;   XREF to: 004398e3 (UNCONDITIONAL_JUMP)  ; LAB_004398e3
    MOV EDX,dword ptr [ESP + 0x28]      ; 0043993e
        ;   Label: LAB_0043993e
    PUSH EDX                            ; 00439942
    MOV ECX,dword ptr [ESP + 0x4]       ; 00439943
    PUSH ECX                            ; 00439947
    MOV EAX,dword ptr [EBX + 0x30]      ; 00439948
    PUSH EAX                            ; 0043994b
    PUSH EDI                            ; 0043994c
    CALL support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_004396d0 ; 0043994d
        ;   XREF to: 004396d0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_004396d0()
    MOV EDX,dword ptr [EBX + 0x34]      ; 00439952
    ADD ESP,0x10                        ; 00439955
    TEST EDX,EDX                        ; 00439958
    JL 0x00439980                       ; 0043995a
        ;   XREF to: 00439980 (CONDITIONAL_JUMP)  ; LAB_00439980
    PUSH EDX                            ; 0043995c
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0043995d
    PUSH EAX                            ; 00439960
    PUSH EDI                            ; 00439961
    CALL support_codec.cpp_CLZWDictionary_addNode_FUN_004394f0 ; 00439962
        ;   XREF to: 004394f0 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_addNode_FUN_004394f0(CLZWDictionary * this_ptr, int code, int parent_index)
    ADD ESP,0xc                         ; 00439967
    TEST EAX,EAX                        ; 0043996a
    JZ 0x00439980                       ; 0043996c
        ;   XREF to: 00439980 (CONDITIONAL_JUMP)  ; LAB_00439980
    MOV dword ptr [EBX + 0x34],0xffffffff ; 0043996e
    MOV dword ptr [EBX + 0x30],ESI      ; 00439975
    MOV dword ptr [EBX + 0x2c],ESI      ; 00439978
    JMP 0x004398d8                      ; 0043997b
        ;   XREF to: 004398d8 (UNCONDITIONAL_JUMP)  ; LAB_004398d8
    MOV EAX,dword ptr [EBX + 0x30]      ; 00439980
        ;   Label: LAB_00439980
    MOV dword ptr [EBX + 0x34],EAX      ; 00439983
    MOV dword ptr [EBX + 0x30],ESI      ; 00439986
    MOV dword ptr [EBX + 0x2c],ESI      ; 00439989
    JMP 0x004398d8                      ; 0043998c
        ;   XREF to: 004398d8 (UNCONDITIONAL_JUMP)  ; LAB_004398d8
    MOV EAX,0x1                         ; 00439991
        ;   Label: LAB_00439991
    ADD ESP,0x8                         ; 00439996
    POP EBP                             ; 00439999
    POP EDI                             ; 0043999a
    POP ESI                             ; 0043999b
    POP EBX                             ; 0043999c
    RET                                 ; 0043999d

