; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * crt_time_c_parse_dst_rule_FUN_0056d774(char *param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   crt_time.c_parse_tz_string_FUN_0056d87c at 0056d90d
;
; Called Functions:
;   crt_string.c_parse_uint_FUN_0056d628
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d774
        ;   Label: crt_time.c_parse_dst_rule_FUN_0056d774
    PUSH ESI                            ; 0056d775
    SUB ESP,0x10                        ; 0056d776
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056d779
    MOV EBX,dword ptr [ESP + 0x20]      ; 0056d77d
    MOV AH,byte ptr [EDX]               ; 0056d781
    MOV ESI,0xffffffff                  ; 0056d783
    CMP AH,0x4a                         ; 0056d788
    JNZ 0x0056d794                      ; 0056d78b
        ;   XREF to: 0056d794 (CONDITIONAL_JUMP)  ; LAB_0056d794
    MOV ESI,0x1                         ; 0056d78d
    ADD EDX,ESI                         ; 0056d792
    CMP byte ptr [EDX],0x4d             ; 0056d794
        ;   Label: LAB_0056d794
    JNZ 0x0056d79c                      ; 0056d797
        ;   XREF to: 0056d79c (CONDITIONAL_JUMP)  ; LAB_0056d79c
    INC EDX                             ; 0056d799
    XOR ESI,ESI                         ; 0056d79a
    LEA EAX,[ESP + 0xc]                 ; 0056d79c
        ;   Label: LAB_0056d79c
    PUSH EAX                            ; 0056d7a0
    PUSH EDX                            ; 0056d7a1
    MOV dword ptr [EBX + 0x20],ESI      ; 0056d7a2
    CALL crt_string.c_parse_uint_FUN_0056d628 ; 0056d7a5
        ;   XREF to: 0056d628 (UNCONDITIONAL_CALL)  ; char * crt_string.c_parse_uint_FUN_0056d628(char * str, int * result)
    MOV ECX,EAX                         ; 0056d7aa
    ADD ESP,0x8                         ; 0056d7ac
    MOV EDX,EAX                         ; 0056d7af
    TEST ESI,ESI                        ; 0056d7b1
    JZ 0x0056d7be                       ; 0056d7b3
        ;   XREF to: 0056d7be (CONDITIONAL_JUMP)  ; LAB_0056d7be
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056d7b5
    MOV dword ptr [EBX + 0x1c],EAX      ; 0056d7b9
    JMP 0x0056d809                      ; 0056d7bc
        ;   XREF to: 0056d809 (UNCONDITIONAL_JUMP)  ; LAB_0056d809
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056d7be
        ;   Label: LAB_0056d7be
    DEC EAX                             ; 0056d7c2
    MOV dword ptr [EBX + 0x10],EAX      ; 0056d7c3
    CMP byte ptr [ECX],0x2e             ; 0056d7c6
    JNZ 0x0056d802                      ; 0056d7c9
        ;   XREF to: 0056d802 (CONDITIONAL_JUMP)  ; LAB_0056d802
    LEA EAX,[ESP + 0xc]                 ; 0056d7cb
    PUSH EAX                            ; 0056d7cf
    INC ECX                             ; 0056d7d0
    PUSH ECX                            ; 0056d7d1
    CALL crt_string.c_parse_uint_FUN_0056d628 ; 0056d7d2
        ;   XREF to: 0056d628 (UNCONDITIONAL_CALL)  ; char * crt_string.c_parse_uint_FUN_0056d628(char * str, int * result)
    MOV ECX,EAX                         ; 0056d7d7
    ADD ESP,0x8                         ; 0056d7d9
    MOV EDX,EAX                         ; 0056d7dc
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056d7de
    MOV dword ptr [EBX + 0xc],EAX       ; 0056d7e2
    CMP byte ptr [ECX],0x2e             ; 0056d7e5
    JNZ 0x0056d802                      ; 0056d7e8
        ;   XREF to: 0056d802 (CONDITIONAL_JUMP)  ; LAB_0056d802
    LEA EAX,[ESP + 0xc]                 ; 0056d7ea
    PUSH EAX                            ; 0056d7ee
    INC ECX                             ; 0056d7ef
    PUSH ECX                            ; 0056d7f0
    CALL crt_string.c_parse_uint_FUN_0056d628 ; 0056d7f1
        ;   XREF to: 0056d628 (UNCONDITIONAL_CALL)  ; char * crt_string.c_parse_uint_FUN_0056d628(char * str, int * result)
    ADD ESP,0x8                         ; 0056d7f6
    MOV EDX,EAX                         ; 0056d7f9
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056d7fb
    MOV dword ptr [EBX + 0x18],EAX      ; 0056d7ff
    MOV dword ptr [EBX + 0x1c],0x0      ; 0056d802
        ;   Label: LAB_0056d802
    MOV ECX,0x2                         ; 0056d809
        ;   Label: LAB_0056d809
    XOR ESI,ESI                         ; 0056d80e
    MOV dword ptr [ESP + 0x8],ECX       ; 0056d810
    MOV dword ptr [ESP],ESI             ; 0056d814
    MOV dword ptr [ESP + 0x4],ESI       ; 0056d817
    CMP byte ptr [EDX],0x2f             ; 0056d81b
    JNZ 0x0056d85f                      ; 0056d81e
        ;   XREF to: 0056d85f (CONDITIONAL_JUMP)  ; LAB_0056d85f
    LEA EAX,[ESP + 0x8]                 ; 0056d820
    PUSH EAX                            ; 0056d824
    INC EDX                             ; 0056d825
    PUSH EDX                            ; 0056d826
    CALL crt_string.c_parse_uint_FUN_0056d628 ; 0056d827
        ;   XREF to: 0056d628 (UNCONDITIONAL_CALL)  ; char * crt_string.c_parse_uint_FUN_0056d628(char * str, int * result)
    ADD ESP,0x8                         ; 0056d82c
    MOV CH,byte ptr [EAX]               ; 0056d82f
    MOV EDX,EAX                         ; 0056d831
    CMP CH,0x3a                         ; 0056d833
    JNZ 0x0056d85f                      ; 0056d836
        ;   XREF to: 0056d85f (CONDITIONAL_JUMP)  ; LAB_0056d85f
    LEA EDX,[ESP + 0x4]                 ; 0056d838
    PUSH EDX                            ; 0056d83c
    INC EAX                             ; 0056d83d
    PUSH EAX                            ; 0056d83e
    CALL crt_string.c_parse_uint_FUN_0056d628 ; 0056d83f
        ;   XREF to: 0056d628 (UNCONDITIONAL_CALL)  ; char * crt_string.c_parse_uint_FUN_0056d628(char * str, int * result)
    ADD ESP,0x8                         ; 0056d844
    MOV CL,byte ptr [EAX]               ; 0056d847
    MOV EDX,EAX                         ; 0056d849
    CMP CL,0x3a                         ; 0056d84b
    JNZ 0x0056d85f                      ; 0056d84e
        ;   XREF to: 0056d85f (CONDITIONAL_JUMP)  ; LAB_0056d85f
    MOV EDX,ESP                         ; 0056d850
    PUSH EDX                            ; 0056d852
    INC EAX                             ; 0056d853
    PUSH EAX                            ; 0056d854
    CALL crt_string.c_parse_uint_FUN_0056d628 ; 0056d855
        ;   XREF to: 0056d628 (UNCONDITIONAL_CALL)  ; char * crt_string.c_parse_uint_FUN_0056d628(char * str, int * result)
    ADD ESP,0x8                         ; 0056d85a
    MOV EDX,EAX                         ; 0056d85d
    MOV EAX,dword ptr [ESP]             ; 0056d85f
        ;   Label: LAB_0056d85f
    MOV dword ptr [EBX],EAX             ; 0056d862
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056d864
    MOV dword ptr [EBX + 0x4],EAX       ; 0056d868
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056d86b
    MOV dword ptr [EBX + 0x8],EAX       ; 0056d86f
    MOV EAX,EDX                         ; 0056d872
    ADD ESP,0x10                        ; 0056d874
    POP ESI                             ; 0056d877
    POP EBX                             ; 0056d878
    RET                                 ; 0056d879

