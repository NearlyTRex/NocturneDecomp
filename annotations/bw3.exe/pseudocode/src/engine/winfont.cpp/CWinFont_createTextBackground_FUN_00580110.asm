; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_winfont_cpp_CWinFont_createTextBackground_FUN_00580110(CWinFont *this_ptr,int width,int height)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined2       Stack[-0x3c]:2  local_3c
; undefined2       Stack[-0x3a]:2  local_3a
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_winfont.cpp_CWinFont_drawText_FUN_0057fe80 at 0057fe8b
;   engine_winfont.cpp_CWinFont_getStringHeight_FUN_005803e0 at 005803f2
;   engine_winfont.cpp_CWinFont_getStringWidth_FUN_00580380 at 00580391
;
; Referenced Globals:
;   void* PTR_CreateBrushIndirect_005b3400 = 001b37d4
;   void* PTR_CreateCompatibleDC_005b3404 = 001b37ea
;   void* PTR_CreateDIBSection_005b3408 = 001b3800
;   void* PTR_DeleteObject_005b3414 = 001b382e
;   void* PTR_Rectangle_005b3420 = 001b3868
;   void* PTR_SelectObject_005b3424 = 001b3874
;   void* PTR_SetBkColor_005b3428 = 001b3884
;   void* PTR_SetBkMode_005b342c = 001b3892
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba20
;
; Called Functions:
;   CreateBrushIndirect
;   CreateCompatibleDC
;   CreateDIBSection
;   crt_memory.c_memset_FUN_005a28f0
;   DeleteObject
;   engine_winfont.cpp_CWinFont_reset_FUN_00580300
;   Rectangle
;   SelectObject
;   SetBkColor
;   SetBkMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580110
        ;   Label: engine_winfont.cpp_CWinFont_createTextBackground_FUN_00580110
    PUSH ESI                            ; 00580111
    PUSH EDI                            ; 00580112
    PUSH EBP                            ; 00580113
    SUB ESP,0x38                        ; 00580114
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00580117
    MOV EDI,dword ptr [ESP + 0x50]      ; 0058011b
    MOV ESI,dword ptr [ESP + 0x54]      ; 0058011f
    TEST EDI,EDI                        ; 00580123
    JLE 0x0058017b                      ; 00580125
        ;   XREF to: 0058017b (CONDITIONAL_JUMP)  ; LAB_0058017b
    TEST ESI,ESI                        ; 00580127
        ;   Label: LAB_00580127
    JLE 0x00580183                      ; 00580129
        ;   XREF to: 00580183 (CONDITIONAL_JUMP)  ; LAB_00580183
    CMP dword ptr [EBX + 0x6a48],0x0    ; 0058012b
        ;   Label: LAB_0058012b
    SETZ AL                             ; 00580132
    MOV ECX,dword ptr [EBX + 0x6b64]    ; 00580135
    AND EAX,0xff                        ; 0058013b
    CMP EDI,ECX                         ; 00580140
    SETG DL                             ; 00580142
    MOVZX EBP,DL                        ; 00580145
    OR EAX,EBP                          ; 00580148
    CMP ESI,dword ptr [EBX + 0x6b68]    ; 0058014a
    SETG DL                             ; 00580150
    MOVZX EBP,DL                        ; 00580153
    MOV ECX,dword ptr [EBX + 0x6b6c]    ; 00580156
    OR EAX,EBP                          ; 0058015c
    CMP ECX,dword ptr [0x005fba20]      ; 0058015e | DAT_005fba20
    SETNZ DL                            ; 00580164
    MOVZX EBP,DL                        ; 00580167
    OR EAX,EBP                          ; 0058016a
    JNZ 0x0058018a                      ; 0058016c
        ;   XREF to: 0058018a (CONDITIONAL_JUMP)  ; LAB_0058018a
    MOV EAX,0x1                         ; 0058016e
    ADD ESP,0x38                        ; 00580173
        ;   Label: LAB_00580173
    POP EBP                             ; 00580176
    POP EDI                             ; 00580177
    POP ESI                             ; 00580178
    POP EBX                             ; 00580179
    RET                                 ; 0058017a
    MOV EDI,dword ptr [0x005fba18]      ; 0058017b | DAT_005fba18
        ;   Label: LAB_0058017b
    JMP 0x00580127                      ; 00580181
        ;   XREF to: 00580127 (UNCONDITIONAL_JUMP)  ; LAB_00580127
    MOV ESI,0x64                        ; 00580183
        ;   Label: LAB_00580183
    JMP 0x0058012b                      ; 00580188
        ;   XREF to: 0058012b (UNCONDITIONAL_JUMP)  ; LAB_0058012b
    PUSH EBX                            ; 0058018a
        ;   Label: LAB_0058018a
    CALL engine_winfont.cpp_CWinFont_reset_FUN_00580300 ; 0058018b
        ;   XREF to: 00580300 (UNCONDITIONAL_CALL)  ; void engine_winfont.cpp_CWinFont_reset_FUN_00580300(CWinFont * this_ptr)
    ADD ESP,0x4                         ; 00580190
    PUSH 0x0                            ; 00580193
    CALL dword ptr CS:[0x5b3404]        ; 00580195 | PTR_CreateCompatibleDC_005b3404
    PUSH 0x2c                           ; 0058019c
    PUSH 0x0                            ; 0058019e
    MOV dword ptr [EBX + 0x6a48],EAX    ; 005801a0
    LEA EAX,[ESP + 0x8]                 ; 005801a6
    PUSH EAX                            ; 005801aa
    MOV EBP,0x28                        ; 005801ab
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005801b0
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV EDX,0x1                         ; 005801b5
    ADD ESP,0xc                         ; 005801ba
    MOV ECX,ESI                         ; 005801bd
    XOR EAX,EAX                         ; 005801bf
    MOV dword ptr [ESP],EBP             ; 005801c1
    MOV word ptr [ESP + 0xc],DX         ; 005801c4
    MOV dword ptr [ESP + 0x14],EAX      ; 005801c9
    MOV dword ptr [ESP + 0x20],EAX      ; 005801cd
    MOV dword ptr [ESP + 0x4],EDI       ; 005801d1
    MOV dword ptr [ESP + 0x8],ESI       ; 005801d5
    NEG ECX                             ; 005801d9
    MOV AX,[0x005fba20]                 ; 005801db | DAT_005fba20
    XOR EBP,EBP                         ; 005801e1
    MOV dword ptr [ESP + 0x8],ECX       ; 005801e3
    PUSH EBP                            ; 005801e7
    XOR EDX,EDX                         ; 005801e8
    MOV word ptr [ESP + 0x12],AX        ; 005801ea
    PUSH EBP                            ; 005801ef
    LEA EAX,[EBX + 0x6a58]              ; 005801f0
    MOV dword ptr [ESP + 0x18],EBP      ; 005801f6
    PUSH EAX                            ; 005801fa
    MOV dword ptr [ESP + 0x24],EBP      ; 005801fb
    MOV dword ptr [ESP + 0x28],EDX      ; 005801ff
    PUSH EBP                            ; 00580203
    LEA EAX,[ESP + 0x10]                ; 00580204
    MOV dword ptr [ESP + 0x34],EBP      ; 00580208
    PUSH EAX                            ; 0058020c
    MOV EBP,dword ptr [EBX + 0x6a48]    ; 0058020d
    PUSH EBP                            ; 00580213
    CALL dword ptr CS:[0x5b3408]        ; 00580214 | PTR_CreateDIBSection_005b3408
    MOV dword ptr [EBX + 0x6a4c],EAX    ; 0058021b
    TEST EAX,EAX                        ; 00580221
    JZ 0x00580173                       ; 00580223
        ;   XREF to: 00580173 (CONDITIONAL_JUMP)  ; LAB_00580173
    PUSH EAX                            ; 00580229
    MOV ECX,dword ptr [EBX + 0x6a48]    ; 0058022a
    PUSH ECX                            ; 00580230
    CALL dword ptr CS:[0x5b3424]        ; 00580231 | PTR_SelectObject_005b3424
    PUSH 0x2                            ; 00580238
    MOV EBP,dword ptr [EBX + 0x6a48]    ; 0058023a
    PUSH EBP                            ; 00580240
    CALL dword ptr CS:[0x5b342c]        ; 00580241 | PTR_SetBkMode_005b342c
    PUSH 0xff00ff                       ; 00580248
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 0058024d
    PUSH EAX                            ; 00580253
    CALL dword ptr CS:[0x5b3428]        ; 00580254 | PTR_SetBkColor_005b3428
    MOV ECX,0xff00ff                    ; 0058025b
    XOR EDX,EDX                         ; 00580260
    LEA EAX,[ESP + 0x2c]                ; 00580262
    MOV dword ptr [ESP + 0x2c],EDX      ; 00580266
    PUSH EAX                            ; 0058026a
    MOV dword ptr [ESP + 0x34],ECX      ; 0058026b
    MOV dword ptr [ESP + 0x38],EDX      ; 0058026f
    CALL dword ptr CS:[0x5b3400]        ; 00580273 | PTR_CreateBrushIndirect_005b3400
    PUSH EAX                            ; 0058027a
    MOV EBP,EAX                         ; 0058027b
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 0058027d
    PUSH EAX                            ; 00580283
    CALL dword ptr CS:[0x5b3424]        ; 00580284 | PTR_SelectObject_005b3424
    PUSH 0x0                            ; 0058028b
    MOV EDX,dword ptr [EBX + 0x6b64]    ; 0058028d
    MOV EAX,dword ptr [EBX + 0x6b68]    ; 00580293
    PUSH EDX                            ; 00580299
    NEG EAX                             ; 0058029a
    PUSH EAX                            ; 0058029c
    PUSH 0x0                            ; 0058029d
    MOV ECX,dword ptr [EBX + 0x6a48]    ; 0058029f
    PUSH ECX                            ; 005802a5
    CALL dword ptr CS:[0x5b3420]        ; 005802a6 | PTR_Rectangle_005b3420
    PUSH EBP                            ; 005802ad
    CALL dword ptr CS:[0x5b3414]        ; 005802ae | PTR_DeleteObject_005b3414
    MOV EBP,dword ptr [EBX + 0x6a50]    ; 005802b5
    PUSH EBP                            ; 005802bb
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 005802bc
    PUSH EAX                            ; 005802c2
    CALL dword ptr CS:[0x5b3424]        ; 005802c3 | PTR_SelectObject_005b3424
    MOV dword ptr [EBX + 0x6a54],EAX    ; 005802ca
    MOV dword ptr [EBX + 0x6b64],EDI    ; 005802d0
    MOV dword ptr [EBX + 0x6b68],ESI    ; 005802d6
    MOV EAX,[0x005fba20]                ; 005802dc | DAT_005fba20
    MOV EDX,dword ptr [EBX + 0x6a48]    ; 005802e1
    MOV dword ptr [EBX + 0x6b6c],EAX    ; 005802e7
    TEST EDX,EDX                        ; 005802ed
    SETNZ AL                            ; 005802ef
    AND EAX,0xff                        ; 005802f2
    ADD ESP,0x38                        ; 005802f7
    POP EBP                             ; 005802fa
    POP EDI                             ; 005802fb
    POP ESI                             ; 005802fc
    POP EBX                             ; 005802fd
    RET                                 ; 005802fe

