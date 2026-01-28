; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_COptimize_FUN_005d71e0(COptimize *this_ptr)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7ccb
;
; Referenced Globals:
;   TerminatedCString s_Invalid_inputs_to_setGeo_00654572
;   TerminatedCString s_Unable_to_copy_object_fo_006545a0
;   TerminatedCString s_Unable_to_copy_merge_wit_006545c3
;
; Called Functions:
;   shape_superopt.cpp_CObj_appendTo_FUN_005d2720
;   shape_superopt.cpp_CObj_copyFrom_FUN_005d2650
;   shape_superopt.cpp_logToFile_FUN_005c7910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d71e0
        ;   Label: shape_superopt.cpp_COptimize_FUN_005d71e0
    PUSH ESI                            ; 005d71e1
    PUSH EDI                            ; 005d71e2
    PUSH EBP                            ; 005d71e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005d71e4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005d71e8
    MOV EDX,dword ptr [ESP + 0x18]      ; 005d71ec
    TEST EDX,EDX                        ; 005d71f0
    JZ 0x005d7248                       ; 005d71f2
        ;   XREF to: 005d7248 (CONDITIONAL_JUMP)  ; LAB_005d7248
    TEST EDI,EDI                        ; 005d71f4
    JZ 0x005d7248                       ; 005d71f6
        ;   XREF to: 005d7248 (CONDITIONAL_JUMP)  ; LAB_005d7248
    PUSH EDX                            ; 005d71f8
    PUSH EBP                            ; 005d71f9
    CALL shape_superopt.cpp_CObj_copyFrom_FUN_005d2650 ; 005d71fa
        ;   XREF to: 005d2650 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CObj_copyFrom_FUN_005d2650(CObj * this_ptr, CObj * source)
    ADD ESP,0x8                         ; 005d71ff
    TEST EAX,EAX                        ; 005d7202
    JZ 0x005d725c                       ; 005d7204
        ;   XREF to: 005d725c (CONDITIONAL_JUMP)  ; LAB_005d725c
    MOV ESI,0x1                         ; 005d7206
    CMP EDI,ESI                         ; 005d720b
    JBE 0x005d723e                      ; 005d720d
        ;   XREF to: 005d723e (CONDITIONAL_JUMP)  ; LAB_005d723e
    SHL EDI,0x2                         ; 005d720f
    LEA EAX,[EDI*0x8 + 0x0]             ; 005d7212
    MOV EBX,dword ptr [ESP + 0x18]      ; 005d7219
    SUB EAX,EDI                         ; 005d721d
    MOV EDI,dword ptr [ESP + 0x18]      ; 005d721f
    ADD EBX,0x1c                        ; 005d7223
    ADD EDI,EAX                         ; 005d7226
    PUSH EBX                            ; 005d7228
        ;   Label: LAB_005d7228
    PUSH EBP                            ; 005d7229
    CALL shape_superopt.cpp_CObj_appendTo_FUN_005d2720 ; 005d722a
        ;   XREF to: 005d2720 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CObj_appendTo_FUN_005d2720(CObj * this_ptr, CObj * dest_obj)
    ADD ESP,0x8                         ; 005d722f
    TEST EAX,EAX                        ; 005d7232
    JZ 0x005d7270                       ; 005d7234
        ;   XREF to: 005d7270 (CONDITIONAL_JUMP)  ; LAB_005d7270
    ADD EBX,0x1c                        ; 005d7236
    INC ESI                             ; 005d7239
    CMP EBX,EDI                         ; 005d723a
    JC 0x005d7228                       ; 005d723c
        ;   XREF to: 005d7228 (CONDITIONAL_JUMP)  ; LAB_005d7228
    MOV EAX,0x1                         ; 005d723e
        ;   Label: LAB_005d723e
    POP EBP                             ; 005d7243
    POP EDI                             ; 005d7244
    POP ESI                             ; 005d7245
    POP EBX                             ; 005d7246
    RET                                 ; 005d7247
    PUSH 0x654572                       ; 005d7248 | = "Invalid inputs to setGeometry"
        ;   Label: LAB_005d7248
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d724d
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d7252
    XOR EAX,EAX                         ; 005d7255
    POP EBP                             ; 005d7257
    POP EDI                             ; 005d7258
    POP ESI                             ; 005d7259
    POP EBX                             ; 005d725a
    RET                                 ; 005d725b
    PUSH 0x6545a0                       ; 005d725c | = "Unable to copy object for optimize"
        ;   Label: LAB_005d725c
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d7261
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d7266
    XOR EAX,EAX                         ; 005d7269
    POP EBP                             ; 005d726b
    POP EDI                             ; 005d726c
    POP ESI                             ; 005d726d
    POP EBX                             ; 005d726e
    RET                                 ; 005d726f
    PUSH ESI                            ; 005d7270
        ;   Label: LAB_005d7270
    PUSH 0x6545c3                       ; 005d7271 | = "Unable to copy merge with object %d f..."
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d7276
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x8                         ; 005d727b
    XOR EAX,EAX                         ; 005d727e
    POP EBP                             ; 005d7280
    POP EDI                             ; 005d7281
    POP ESI                             ; 005d7282
    POP EBX                             ; 005d7283
    RET                                 ; 005d7284

