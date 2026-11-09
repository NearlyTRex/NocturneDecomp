; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawLine_FUN_004011a0(int x1,int y1,int x2,int y2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   cockpit_ckptutil.c_drawClippedEdges_FUN_00436bb0 at 00436c75
;   core_game.cpp_CGame_drawScreenBorder_FUN_004b45e0 at 004b45f2
;   engine_2d.c_FUN_00402cf0 at 00402f15
;   engine_3d.c_FUN_00407b30 at 00407d9e
;   engine_console.cpp_FUN_00442250 at 00442349
;   shape_edittool.cpp_FUN_0047c050 at 0047c163
;   shape_edittool.cpp_FUN_004843d0 at 00484546
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004011a0
        ;   Label: engine_2d.c_drawLine_FUN_004011a0
    PUSH ESI                            ; 004011a1
    PUSH EDI                            ; 004011a2
    PUSH EBP                            ; 004011a3
    SUB ESP,0x10                        ; 004011a4
    MOV EAX,dword ptr [ESP + 0x24]      ; 004011a7
    MOV EDI,dword ptr [ESP + 0x28]      ; 004011ab
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004011af
    MOV ESI,dword ptr [ESP + 0x30]      ; 004011b3
    MOV dword ptr [ESP],0x1             ; 004011b7
    CMP EDI,ESI                         ; 004011be
    JLE 0x004011ce                      ; 004011c0
        ;   XREF to: 004011ce (CONDITIONAL_JUMP)  ; LAB_004011ce
    MOV EBX,EAX                         ; 004011c2
    MOV EAX,EBP                         ; 004011c4
    MOV EBP,EBX                         ; 004011c6
    MOV EBX,EDI                         ; 004011c8
    MOV EDI,ESI                         ; 004011ca
    MOV ESI,EBX                         ; 004011cc
    SUB ESI,EDI                         ; 004011ce
        ;   Label: LAB_004011ce
    SUB EBP,EAX                         ; 004011d0
    MOV dword ptr [ESP + 0xc],ESI       ; 004011d2
    TEST EBP,EBP                        ; 004011d6
    JL 0x00401225                       ; 004011d8
        ;   XREF to: 00401225 (CONDITIONAL_JUMP)  ; LAB_00401225
    MOV EBX,EDI                         ; 004011da
        ;   Label: LAB_004011da
    MOV EDI,dword ptr [ESP + 0xc]       ; 004011dc
    MOV ESI,EAX                         ; 004011e0
    CMP EBP,EDI                         ; 004011e2
    JLE 0x00401231                      ; 004011e4
        ;   XREF to: 00401231 (CONDITIONAL_JUMP)  ; LAB_00401231
    XOR EAX,EAX                         ; 004011e6
    ADD EDI,EDI                         ; 004011e8
    MOV dword ptr [ESP + 0x8],EAX       ; 004011ea
    SUB EDI,EBP                         ; 004011ee
    TEST EBP,EBP                        ; 004011f0
    JL 0x0040121d                       ; 004011f2
        ;   XREF to: 0040121d (CONDITIONAL_JUMP)  ; LAB_0040121d
    PUSH EBX                            ; 004011f4
        ;   Label: LAB_004011f4
    PUSH ESI                            ; 004011f5
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004011f6
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004011fb
    TEST EDI,EDI                        ; 004011fe
    JLE 0x00401205                      ; 00401200
        ;   XREF to: 00401205 (CONDITIONAL_JUMP)  ; LAB_00401205
    INC EBX                             ; 00401202
    SUB EDI,EBP                         ; 00401203
    MOV ECX,dword ptr [ESP]             ; 00401205
        ;   Label: LAB_00401205
    MOV EDX,dword ptr [ESP + 0x8]       ; 00401208
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040120c
    INC EDX                             ; 00401210
    ADD ESI,ECX                         ; 00401211
    ADD EDI,EAX                         ; 00401213
    MOV dword ptr [ESP + 0x8],EDX       ; 00401215
    CMP EBP,EDX                         ; 00401219
    JGE 0x004011f4                      ; 0040121b
        ;   XREF to: 004011f4 (CONDITIONAL_JUMP)  ; LAB_004011f4
    ADD ESP,0x10                        ; 0040121d
        ;   Label: LAB_0040121d
    POP EBP                             ; 00401220
    POP EDI                             ; 00401221
    POP ESI                             ; 00401222
    POP EBX                             ; 00401223
    RET                                 ; 00401224
    MOV ECX,0xffffffff                  ; 00401225
        ;   Label: LAB_00401225
    NEG EBP                             ; 0040122a
    MOV dword ptr [ESP],ECX             ; 0040122c
    JMP 0x004011da                      ; 0040122f
        ;   XREF to: 004011da (UNCONDITIONAL_JUMP)  ; LAB_004011da
    MOV EAX,dword ptr [ESP + 0xc]       ; 00401231
        ;   Label: LAB_00401231
    XOR EDX,EDX                         ; 00401235
    LEA EDI,[EBP + EBP*0x1]             ; 00401237
    MOV dword ptr [ESP + 0x4],EDX       ; 0040123b
    SUB EDI,EAX                         ; 0040123f
    TEST EAX,EAX                        ; 00401241
    JL 0x0040121d                       ; 00401243
        ;   XREF to: 0040121d (CONDITIONAL_JUMP)  ; LAB_0040121d
    PUSH EBX                            ; 00401245
        ;   Label: LAB_00401245
    PUSH ESI                            ; 00401246
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00401247
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0040124c
    TEST EDI,EDI                        ; 0040124f
    JLE 0x0040125e                      ; 00401251
        ;   XREF to: 0040125e (CONDITIONAL_JUMP)  ; LAB_0040125e
    MOV EDX,dword ptr [ESP + 0xc]       ; 00401253
    MOV EAX,dword ptr [ESP]             ; 00401257
    SUB EDI,EDX                         ; 0040125a
    ADD ESI,EAX                         ; 0040125c
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040125e
        ;   Label: LAB_0040125e
    MOV ECX,dword ptr [ESP + 0xc]       ; 00401262
    INC EBX                             ; 00401266
    INC EDX                             ; 00401267
    ADD EDI,EBP                         ; 00401268
    MOV dword ptr [ESP + 0x4],EDX       ; 0040126a
    CMP EDX,ECX                         ; 0040126e
    JG 0x0040121d                       ; 00401270
        ;   XREF to: 0040121d (CONDITIONAL_JUMP)  ; LAB_0040121d
    JMP 0x00401245                      ; 00401272
        ;   XREF to: 00401245 (UNCONDITIONAL_JUMP)  ; LAB_00401245

