; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tawiscar_cpp_CTawiscara_getTargetPoints_FUN_00596310(CTawiscara *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CTawiscara *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00596310
        ;   Label: core_tawiscar.cpp_CTawiscara_getTargetPoints_FUN_00596310
    PUSH ESI                            ; 00596311
    PUSH EDI                            ; 00596312
    SUB ESP,0x18                        ; 00596313
    MOV EAX,dword ptr [ESP + 0x28]      ; 00596316
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0059631a
    MOV EDX,dword ptr [EAX + 0xd058]    ; 0059631e
    PUSH EDX                            ; 00596324
    ADD EAX,0x158                       ; 00596325
    PUSH EAX                            ; 0059632a
    LEA ESI,[ESP + 0x8]                 ; 0059632b
    LEA EDI,[ESP + 0x14]                ; 0059632f
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00596333
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x8]                 ; 00596338
    ADD ESP,0x8                         ; 0059633c
    LEA EAX,[ESP + 0xc]                 ; 0059633f
    MOVSD ES:EDI,ESI                    ; 00596343
    MOVSD ES:EDI,ESI                    ; 00596344
    MOVSD ES:EDI,ESI                    ; 00596345
    CMP EBX,EAX                         ; 00596346
    JNZ 0x00596356                      ; 00596348
        ;   XREF to: 00596356 (CONDITIONAL_JUMP)  ; LAB_00596356
    MOV EAX,0x1                         ; 0059634a
    ADD ESP,0x18                        ; 0059634f
    POP EDI                             ; 00596352
    POP ESI                             ; 00596353
    POP EBX                             ; 00596354
    RET                                 ; 00596355
    MOV EAX,dword ptr [ESP + 0xc]       ; 00596356
        ;   Label: LAB_00596356
    MOV dword ptr [EBX],EAX             ; 0059635a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059635c
    MOV dword ptr [EBX + 0x4],EAX       ; 00596360
    MOV EAX,dword ptr [ESP + 0x14]      ; 00596363
    MOV dword ptr [EBX + 0x8],EAX       ; 00596367
    MOV EAX,0x1                         ; 0059636a
    ADD ESP,0x18                        ; 0059636f
    POP EDI                             ; 00596372
    POP ESI                             ; 00596373
    POP EBX                             ; 00596374
    RET                                 ; 00596375

