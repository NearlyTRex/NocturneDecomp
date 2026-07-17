; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLdrawPolyList2_FUN_10005130(SRenderVertex *vertex_buffer,ushort **polygons,int polygon_count,int render_flags)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; ushort * *       Stack[0x8]:4   polygons
; int              Stack[0xc]:4   polygon_count
; int              Stack[0x10]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   int g_InScene = 0x0
;   int g_PendingIndexCount = 0x0
;   undefined4 DAT_10014234
;   TerminatedCString s_You_re_shoving_too_many_10016c20
;   WORD[16000] g_IndexBuffer
;   undefined4 g_IndexBuffer[1]
;   undefined4 g_IndexBuffer[2]
;
; Called Functions:
;   dll_dx7.cpp_applyRenderState_FUN_10003f10
;   dll_dx7.cpp_fatalError_FUN_10002340
;   dll_dx7.cpp_flushBatch_FUN_100047b0
;   dll_dx7.cpp_FUN_10005010
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 10005130
        ;   Label: dll_dx7.cpp_APIDLLdrawPolyList2_FUN_10005130
    CMP dword ptr [0x10014204],0x0      ; 10005133 | g_InScene
    PUSH EBX                            ; 1000513a
    PUSH ESI                            ; 1000513b
    PUSH EDI                            ; 1000513c
    PUSH EBP                            ; 1000513d
    JNZ 0x1000514a                      ; 1000513e
        ;   XREF to: 1000514a (CONDITIONAL_JUMP)  ; LAB_1000514a
    XOR EAX,EAX                         ; 10005140
    POP EBP                             ; 10005142
    POP EDI                             ; 10005143
    POP ESI                             ; 10005144
    POP EBX                             ; 10005145
    ADD ESP,0x10                        ; 10005146
    RET                                 ; 10005149
    MOV ESI,dword ptr [ESP + 0x30]      ; 1000514a
        ;   Label: LAB_1000514a
    PUSH ESI                            ; 1000514e
    CALL dll_dx7.cpp_applyRenderState_FUN_10003f10 ; 1000514f
        ;   XREF to: 10003f10 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_applyRenderState_FUN_10003f10(uint render_flags)
    MOV EAX,dword ptr [ESP + 0x30]      ; 10005154
    ADD ESP,0x4                         ; 10005158
    INC dword ptr [0x10014234]          ; 1000515b | DAT_10014234
    TEST EAX,EAX                        ; 10005161
    JLE 0x10005267                      ; 10005163
        ;   XREF to: 10005267 (CONDITIONAL_JUMP)  ; LAB_10005267
    MOV EDI,dword ptr [ESP + 0x28]      ; 10005169
    MOV EBX,dword ptr [ESP + 0x24]      ; 1000516d
    MOV dword ptr [ESP + 0x1c],EAX      ; 10005171
    MOV EBP,dword ptr [EDI]             ; 10005175
        ;   Label: LAB_10005175
    XOR EAX,EAX                         ; 10005177
    MOV AX,word ptr [EBP]               ; 10005179
    PUSH ESI                            ; 1000517d
    LEA ECX,[ESP + 0x14]                ; 1000517e
    PUSH EBX                            ; 10005182
    MOV dword ptr [ESP + 0x18],EAX      ; 10005183
    PUSH ECX                            ; 10005187
    XOR EAX,EAX                         ; 10005188
    MOV AX,word ptr [EBP + 0x6]         ; 1000518a
    SHL EAX,0x8                         ; 1000518e
    MOV dword ptr [ESP + 0x20],EAX      ; 10005191
    XOR EAX,EAX                         ; 10005195
    MOV AX,word ptr [EBP + 0xc]         ; 10005197
    SHL EAX,0x8                         ; 1000519b
    MOV dword ptr [ESP + 0x24],EAX      ; 1000519e
    CALL dll_dx7.cpp_FUN_10005010       ; 100051a2
        ;   XREF to: 10005010 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10005010()
    ADD ESP,0xc                         ; 100051a7
    MOV ECX,dword ptr [0x1001422c]      ; 100051aa | g_PendingIndexCount
    MOV word ptr [ECX*0x2 + 0x10238910],AX ; 100051b0 | g_IndexBuffer
    PUSH ESI                            ; 100051b8
    XOR EAX,EAX                         ; 100051b9
    PUSH EBX                            ; 100051bb
    MOV AX,word ptr [EBP + 0x2]         ; 100051bc
    LEA ECX,[ESP + 0x18]                ; 100051c0
    MOV dword ptr [ESP + 0x18],EAX      ; 100051c4
    PUSH ECX                            ; 100051c8
    XOR EAX,EAX                         ; 100051c9
    MOV AX,word ptr [EBP + 0x8]         ; 100051cb
    SHL EAX,0x8                         ; 100051cf
    MOV dword ptr [ESP + 0x20],EAX      ; 100051d2
    XOR EAX,EAX                         ; 100051d6
    MOV AX,word ptr [EBP + 0xe]         ; 100051d8
    SHL EAX,0x8                         ; 100051dc
    MOV dword ptr [ESP + 0x24],EAX      ; 100051df
    CALL dll_dx7.cpp_FUN_10005010       ; 100051e3
        ;   XREF to: 10005010 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10005010()
    ADD ESP,0xc                         ; 100051e8
    MOV ECX,dword ptr [0x1001422c]      ; 100051eb | g_PendingIndexCount
    MOV word ptr [ECX*0x2 + 0x10238912],AX ; 100051f1 | g_IndexBuffer[1]
    PUSH ESI                            ; 100051f9
    XOR EAX,EAX                         ; 100051fa
    PUSH EBX                            ; 100051fc
    MOV AX,word ptr [EBP + 0x4]         ; 100051fd
    LEA ECX,[ESP + 0x18]                ; 10005201
    MOV dword ptr [ESP + 0x18],EAX      ; 10005205
    PUSH ECX                            ; 10005209
    XOR EAX,EAX                         ; 1000520a
    MOV AX,word ptr [EBP + 0xa]         ; 1000520c
    SHL EAX,0x8                         ; 10005210
    MOV dword ptr [ESP + 0x20],EAX      ; 10005213
    XOR EAX,EAX                         ; 10005217
    MOV AX,word ptr [EBP + 0x10]        ; 10005219
    SHL EAX,0x8                         ; 1000521d
    MOV dword ptr [ESP + 0x24],EAX      ; 10005220
    CALL dll_dx7.cpp_FUN_10005010       ; 10005224
        ;   XREF to: 10005010 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10005010()
    ADD ESP,0xc                         ; 10005229
    MOV ECX,dword ptr [0x1001422c]      ; 1000522c | g_PendingIndexCount
    ADD dword ptr [0x1001422c],0x3      ; 10005232 | g_PendingIndexCount
    MOV word ptr [ECX*0x2 + 0x10238914],AX ; 10005239 | g_IndexBuffer[2]
    CMP dword ptr [0x1001422c],0x3e76   ; 10005241 | g_PendingIndexCount
    JLE 0x1000525a                      ; 1000524b
        ;   XREF to: 1000525a (CONDITIONAL_JUMP)  ; LAB_1000525a
    PUSH 0x10016c20                     ; 1000524d | = "You're shoving too many faces"
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10005252
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    ADD EDI,0x4                         ; 1000525a
        ;   Label: LAB_1000525a
    DEC dword ptr [ESP + 0x1c]          ; 1000525d
    JNZ 0x10005175                      ; 10005261
        ;   XREF to: 10005175 (CONDITIONAL_JUMP)  ; LAB_10005175
    CALL dll_dx7.cpp_flushBatch_FUN_100047b0 ; 10005267
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_flushBatch_FUN_100047b0()
        ;   Label: LAB_10005267
    MOV EAX,0x1                         ; 1000526c
    POP EBP                             ; 10005271
    POP EDI                             ; 10005272
    POP ESI                             ; 10005273
    POP EBX                             ; 10005274
    ADD ESP,0x10                        ; 10005275
    RET                                 ; 10005278

