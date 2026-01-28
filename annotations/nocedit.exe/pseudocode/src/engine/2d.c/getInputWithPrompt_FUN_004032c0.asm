; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_2d_c_getInputWithPrompt_FUN_004032c0(char *buffer,int max_length,int x,int y,char *prompt)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; int              Stack[0x8]:4   max_length
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; char *           Stack[0x14]:4   prompt
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[42]:
;   core_cloth.cpp_FUN_0043c430 at 0043c579
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057eacd
;   core_setedit.cpp_DementedFogEditor_FUN_00580730 at 00580cae
;   shape_design.c_centerKeyframeModels_FUN_004681a0 at 004681c1
;   shape_design.c_centerObject_FUN_00466610 at 0046675c
;   shape_design.c_centerVerticesAroundPoint_FUN_0045ea90 at 0045eab1
;   shape_design.c_combineTextureMaps_FUN_00469ee0 at 00469f04
;   shape_design.c_configureFullPassPolygonReduction_FUN_00465810 at 00465846
;   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 at 004655ea
;   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 at 004617dc
;   ... and 32 more
;
; Referenced Globals:
;   TerminatedCString s_s_s_0061322f
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004032c0
        ;   Label: engine_2d.c_getInputWithPrompt_FUN_004032c0
    PUSH ESI                            ; 004032c1
    PUSH EDI                            ; 004032c2
    PUSH EBP                            ; 004032c3
    SUB ESP,0x104                       ; 004032c4
    MOV ESI,dword ptr [ESP + 0x118]     ; 004032ca
    MOV EBP,dword ptr [ESP + 0x120]     ; 004032d1
    MOV EDI,dword ptr [ESP + 0x124]     ; 004032d8
    MOV byte ptr [ESI],0x0              ; 004032df
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004032e2
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    XOR EBX,EBX                         ; 004032e7
    PUSH ESI                            ; 004032e9
        ;   Label: LAB_004032e9
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004032ea
    PUSH EDX                            ; 004032f1
    PUSH 0x61322f                       ; 004032f2 | = "%s%s_    "
    LEA EAX,[ESP + 0xc]                 ; 004032f7
    PUSH EAX                            ; 004032fb
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004032fc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00403301
    PUSH EDI                            ; 00403304
    PUSH EBP                            ; 00403305
    LEA EAX,[ESP + 0x8]                 ; 00403306
    PUSH EAX                            ; 0040330a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0040330b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00403310
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00403313
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00403318
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    AND EAX,0xff                        ; 0040331d
    MOV dword ptr [ESP + 0x100],EAX     ; 00403322
    CMP EAX,0xd                         ; 00403329
    JZ 0x0040337b                       ; 0040332c
        ;   XREF to: 0040337b (CONDITIONAL_JUMP)  ; LAB_0040337b
    CMP EAX,0x1b                        ; 0040332e
    JZ 0x00403378                       ; 00403331
        ;   XREF to: 00403378 (CONDITIONAL_JUMP)  ; LAB_00403378
    CMP EAX,0x8                         ; 00403333
    JNZ 0x00403343                      ; 00403336
        ;   XREF to: 00403343 (CONDITIONAL_JUMP)  ; LAB_00403343
    TEST EBX,EBX                        ; 00403338
    JLE 0x00403343                      ; 0040333a
        ;   XREF to: 00403343 (CONDITIONAL_JUMP)  ; LAB_00403343
    DEC EBX                             ; 0040333c
    LEA EAX,[ESI + EBX*0x1]             ; 0040333d
    MOV byte ptr [EAX],0x0              ; 00403340
    MOV ECX,dword ptr [ESP + 0x100]     ; 00403343
        ;   Label: LAB_00403343
    CMP ECX,0x1f                        ; 0040334a
    JLE 0x004032e9                      ; 0040334d
        ;   XREF to: 004032e9 (CONDITIONAL_JUMP)  ; LAB_004032e9
    CMP ECX,0x80                        ; 0040334f
    JGE 0x004032e9                      ; 00403355
        ;   XREF to: 004032e9 (CONDITIONAL_JUMP)  ; LAB_004032e9
    CMP EBX,dword ptr [ESP + 0x11c]     ; 00403357
    JGE 0x004032e9                      ; 0040335e
        ;   XREF to: 004032e9 (CONDITIONAL_JUMP)  ; LAB_004032e9
    LEA EAX,[ESI + EBX*0x1]             ; 00403360
    MOV DL,byte ptr [ESP + 0x100]       ; 00403363
    INC EBX                             ; 0040336a
    MOV byte ptr [EAX],DL               ; 0040336b
    LEA EAX,[ESI + EBX*0x1]             ; 0040336d
    MOV byte ptr [EAX],0x0              ; 00403370
    JMP 0x004032e9                      ; 00403373
        ;   XREF to: 004032e9 (UNCONDITIONAL_JUMP)  ; LAB_004032e9
    MOV byte ptr [ESI],0x0              ; 00403378
        ;   Label: LAB_00403378
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0040337b
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_0040337b
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00403380
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,dword ptr [ESP + 0x100]     ; 00403385
    ADD ESP,0x104                       ; 0040338c
    POP EBP                             ; 00403392
    POP EDI                             ; 00403393
    POP ESI                             ; 00403394
    POP EBX                             ; 00403395
    RET                                 ; 00403396

