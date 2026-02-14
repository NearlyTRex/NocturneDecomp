; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0(CPackedBitmap *this_ptr,uchar *raw_bitmap_data,int row_stride)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   raw_bitmap_data
; int              Stack[0xc]:4   row_stride
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080 at 0054b0a8
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 at 0054c3b2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b0e0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
    PUSH ESI                            ; 0054b0e1
    PUSH EDI                            ; 0054b0e2
    PUSH EBP                            ; 0054b0e3
    SUB ESP,0x8                         ; 0054b0e4
    MOV EBP,dword ptr [ESP + 0x20]      ; 0054b0e7
    CMP dword ptr [ESP + 0x24],0x0      ; 0054b0eb
    JZ 0x0054b177                       ; 0054b0f0
        ;   XREF to: 0054b177 (CONDITIONAL_JUMP)  ; LAB_0054b177
    XOR ECX,ECX                         ; 0054b0f6
        ;   Label: LAB_0054b0f6
    MOV dword ptr [ESP + 0x4],ECX       ; 0054b0f8
    MOV dword ptr [ESP],ECX             ; 0054b0fc
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0054b0ff
        ;   Label: LAB_0054b0ff
    MOV ESI,dword ptr [ESP + 0x4]       ; 0054b103
    MOV ECX,dword ptr [ECX + 0x20]      ; 0054b107
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0054b10a
    ADD ECX,ESI                         ; 0054b10e
    MOV EBX,dword ptr [EBX + 0x14]      ; 0054b110
    MOV EDX,dword ptr [ECX]             ; 0054b113
    MOV EDI,dword ptr [ECX + 0x4]       ; 0054b115
    ADD EDX,EBX                         ; 0054b118
    ADD EBX,EDI                         ; 0054b11a
    CMP EDX,EBX                         ; 0054b11c
    JNC 0x0054b14c                      ; 0054b11e
        ;   XREF to: 0054b14c (CONDITIONAL_JUMP)  ; LAB_0054b14c
    LEA EDI,[EDX + 0x4]                 ; 0054b120
        ;   Label: LAB_0054b120
    XOR ECX,ECX                         ; 0054b123
    XOR ESI,ESI                         ; 0054b125
    MOV CX,word ptr [EDX + 0x2]         ; 0054b127
    MOV SI,word ptr [EDX]               ; 0054b12b
    LEA EDX,[ECX + 0x3]                 ; 0054b12e
    AND DL,0xfc                         ; 0054b131
    ADD ESI,EBP                         ; 0054b134
    ADD EDX,EDI                         ; 0054b136
    PUSH EDI                            ; 0054b138
    MOV EAX,ECX                         ; 0054b139
    SHR ECX,0x2                         ; 0054b13b
    MOVSD.REP ES:EDI,ESI                ; 0054b13e
    MOV CL,AL                           ; 0054b140
    AND CL,0x3                          ; 0054b142
    MOVSB.REP ES:EDI,ESI                ; 0054b145
    POP EDI                             ; 0054b147
    CMP EDX,EBX                         ; 0054b148
    JC 0x0054b120                       ; 0054b14a
        ;   XREF to: 0054b120 (CONDITIONAL_JUMP)  ; LAB_0054b120
    MOV EDX,dword ptr [ESP]             ; 0054b14c
        ;   Label: LAB_0054b14c
    MOV ECX,dword ptr [ESP + 0x24]      ; 0054b14f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054b153
    INC EDX                             ; 0054b157
    ADD EBP,ECX                         ; 0054b158
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0054b15a
    ADD EAX,0x4                         ; 0054b15e
    MOV dword ptr [ESP],EDX             ; 0054b161
    MOV EBX,dword ptr [ECX + 0x1c]      ; 0054b164
    MOV dword ptr [ESP + 0x4],EAX       ; 0054b167
    CMP EDX,EBX                         ; 0054b16b
    JL 0x0054b0ff                       ; 0054b16d
        ;   XREF to: 0054b0ff (CONDITIONAL_JUMP)  ; LAB_0054b0ff
    ADD ESP,0x8                         ; 0054b16f
    POP EBP                             ; 0054b172
    POP EDI                             ; 0054b173
    POP ESI                             ; 0054b174
    POP EBX                             ; 0054b175
    RET                                 ; 0054b176
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0054b177
        ;   Label: LAB_0054b177
    MOV EDX,dword ptr [EDX + 0x18]      ; 0054b17b
    MOV dword ptr [ESP + 0x24],EDX      ; 0054b17e
    JMP 0x0054b0f6                      ; 0054b182
        ;   XREF to: 0054b0f6 (UNCONDITIONAL_JUMP)  ; LAB_0054b0f6

