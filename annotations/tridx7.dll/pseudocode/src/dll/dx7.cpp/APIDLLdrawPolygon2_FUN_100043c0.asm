; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLdrawPolygon2_FUN_100043c0(SRenderVertex **vertex_array,int vertex_count,int render_flags)
;
; Parameters:
; SRenderVertex * * Stack[0x4]:4   vertex_array
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   render_flags
;
; XREF[1]:
;   dll_dx7.cpp_APIDLLdrawPolygon_FUN_10004380 at 100043aa
;
; Referenced Globals:
;   int g_InScene = 0x0
;   int g_PendingVertexCount = 0x0
;   int g_PendingIndexCount = 0x0
;   SScreenVertex[16000] g_VertexBuffer
;   WORD[16000] g_IndexBuffer
;   undefined4 g_IndexBuffer[1]
;   undefined4 g_IndexBuffer[2]
;   undefined4 g_IndexBuffer[3]
;   undefined4 g_IndexBuffer[4]
;   undefined4 g_IndexBuffer[5]
;
; Called Functions:
;   dll_dx7.cpp_applyRenderState_FUN_10003f10
;   dll_dx7.cpp_flushBatch_FUN_100047b0
;   dll_dx7.cpp_FUN_100044b0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10014204],0x0      ; 100043c0 | g_InScene
        ;   Label: dll_dx7.cpp_APIDLLdrawPolygon2_FUN_100043c0
    PUSH EBX                            ; 100043c7
    PUSH ESI                            ; 100043c8
    PUSH EDI                            ; 100043c9
    PUSH EBP                            ; 100043ca
    JNZ 0x100043d4                      ; 100043cb
        ;   XREF to: 100043d4 (CONDITIONAL_JUMP)  ; LAB_100043d4
    XOR EAX,EAX                         ; 100043cd
    POP EBP                             ; 100043cf
    POP EDI                             ; 100043d0
    POP ESI                             ; 100043d1
    POP EBX                             ; 100043d2
    RET                                 ; 100043d3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 100043d4
        ;   Label: LAB_100043d4
    PUSH EAX                            ; 100043d8
    CALL dll_dx7.cpp_applyRenderState_FUN_10003f10 ; 100043d9
        ;   XREF to: 10003f10 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_applyRenderState_FUN_10003f10(uint render_flags)
    MOV EDI,dword ptr [ESP + 0x18]      ; 100043de
    MOV ESI,dword ptr [ESP + 0x1c]      ; 100043e2
    ADD ESP,0x4                         ; 100043e6
    MOV EAX,dword ptr [EDI]             ; 100043e9
    CMP ESI,0x1                         ; 100043eb
    MOV EBX,dword ptr [EAX + 0x8]       ; 100043ee
    JLE 0x1000440a                      ; 100043f1
        ;   XREF to: 1000440a (CONDITIONAL_JUMP)  ; LAB_1000440a
    LEA EDX,[EDI + 0x4]                 ; 100043f3
    LEA ECX,[ESI + -0x1]                ; 100043f6
    MOV EAX,dword ptr [EDX]             ; 100043f9
        ;   Label: LAB_100043f9
    MOV EAX,dword ptr [EAX + 0x8]       ; 100043fb
    CMP EAX,EBX                         ; 100043fe
    JLE 0x10004404                      ; 10004400
        ;   XREF to: 10004404 (CONDITIONAL_JUMP)  ; LAB_10004404
    MOV EBX,EAX                         ; 10004402
    ADD EDX,0x4                         ; 10004404
        ;   Label: LAB_10004404
    DEC ECX                             ; 10004407
    JNZ 0x100043f9                      ; 10004408
        ;   XREF to: 100043f9 (CONDITIONAL_JUMP)  ; LAB_100043f9
    XOR EBP,EBP                         ; 1000440a
        ;   Label: LAB_1000440a
    MOV ECX,dword ptr [0x10014228]      ; 1000440c | g_PendingVertexCount
    TEST ESI,ESI                        ; 10004412
    JLE 0x10004441                      ; 10004414
        ;   XREF to: 10004441 (CONDITIONAL_JUMP)  ; LAB_10004441
    LEA EAX,[ECX + EBP*0x1]             ; 10004416
        ;   Label: LAB_10004416
    PUSH EBX                            ; 10004419
    SHL EAX,0x5                         ; 1000441a
    MOV EDX,dword ptr [ESP + 0x20]      ; 1000441d
    PUSH EDX                            ; 10004421
    INC EBP                             ; 10004422
    LEA ECX,[EAX + 0x1013b8d8]          ; 10004423 | g_VertexBuffer
    MOV EAX,dword ptr [EDI + EBP*0x4 + -0x4] ; 10004429
    PUSH ECX                            ; 1000442d
    PUSH EAX                            ; 1000442e
    CALL dll_dx7.cpp_FUN_100044b0       ; 1000442f
        ;   XREF to: 100044b0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100044b0()
    ADD ESP,0x10                        ; 10004434
    MOV ECX,dword ptr [0x10014228]      ; 10004437 | g_PendingVertexCount
    CMP EBP,ESI                         ; 1000443d
    JL 0x10004416                       ; 1000443f
        ;   XREF to: 10004416 (CONDITIONAL_JUMP)  ; LAB_10004416
    XOR EDI,EDI                         ; 10004441
        ;   Label: LAB_10004441
    LEA EBX,[ESI + -0x2]                ; 10004443
    TEST EBX,EBX                        ; 10004446
    JLE 0x1000447d                      ; 10004448
        ;   XREF to: 1000447d (CONDITIONAL_JUMP)  ; LAB_1000447d
    MOV DX,CX                           ; 1000444a
    MOV EAX,[0x1001422c]                ; 1000444d | g_PendingIndexCount
    LEA EBP,[EBX + EBX*0x2]             ; 10004452
    LEA EAX,[EAX*0x2 + 0x10238910]      ; 10004455 | g_IndexBuffer
    ADD dword ptr [0x1001422c],EBP      ; 1000445c | g_PendingIndexCount
    MOV word ptr [EAX],DX               ; 10004462 | g_IndexBuffer | g_IndexBuffer[3]
        ;   Label: LAB_10004462
    LEA EBP,[ECX + EDI*0x1 + 0x1]       ; 10004465
    MOV word ptr [EAX + 0x2],BP         ; 10004469 | g_IndexBuffer[1] | g_IndexBuffer[4]
    ADD EAX,0x6                         ; 1000446d
    LEA EBP,[ECX + EDI*0x1 + 0x2]       ; 10004470
    INC EDI                             ; 10004474
    MOV word ptr [EAX + -0x2],BP        ; 10004475 | g_IndexBuffer[2] | g_IndexBuffer[5]
    CMP EDI,EBX                         ; 10004479
    JL 0x10004462                       ; 1000447b
        ;   XREF to: 10004462 (CONDITIONAL_JUMP)  ; LAB_10004462
    ADD ECX,ESI                         ; 1000447d
        ;   Label: LAB_1000447d
    MOV dword ptr [0x10014228],ECX      ; 1000447f | g_PendingVertexCount
    CMP ECX,0x3e76                      ; 10004485
    JLE 0x10004492                      ; 1000448b
        ;   XREF to: 10004492 (CONDITIONAL_JUMP)  ; LAB_10004492
    CALL dll_dx7.cpp_flushBatch_FUN_100047b0 ; 1000448d
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_flushBatch_FUN_100047b0()
    CMP dword ptr [0x1001422c],0x3e76   ; 10004492 | g_PendingIndexCount
        ;   Label: LAB_10004492
    JLE 0x100044a3                      ; 1000449c
        ;   XREF to: 100044a3 (CONDITIONAL_JUMP)  ; LAB_100044a3
    CALL dll_dx7.cpp_flushBatch_FUN_100047b0 ; 1000449e
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_flushBatch_FUN_100047b0()
    MOV EAX,0x1                         ; 100044a3
        ;   Label: LAB_100044a3
    POP EBP                             ; 100044a8
    POP EDI                             ; 100044a9
    POP ESI                             ; 100044aa
    POP EBX                             ; 100044ab
    RET                                 ; 100044ac

