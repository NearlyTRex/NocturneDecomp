; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_free_FUN_004e8260(CMP3Decoder *this_ptr)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   sound_mp3.cpp_CMP3Decoder_dtor_FUN_004e7dd0 at 004e7dd6
;   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_004e7ed0 at 004e7edc
;   sound_sndmain.cpp_getSampleInfo_FUN_005279e0 at 00527bc2
;   sound_sndmain.cpp_getSfxSample_FUN_00522480 at 005226fd
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;   crt_stdio.c_fclose_FUN_00563380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8260
        ;   Label: sound_mp3.cpp_CMP3Decoder_free_FUN_004e8260
    PUSH ESI                            ; 004e8261
    PUSH EDI                            ; 004e8262
    MOV EDI,dword ptr [ESP + 0x10]      ; 004e8263
    MOV dword ptr [EDI + 0x10c],0x0     ; 004e8267
    LEA EBX,[EDI + 0x5320]              ; 004e8271
    MOV dword ptr [EDI + 0x108],0x0     ; 004e8277
    MOV EDX,dword ptr [EBX]             ; 004e8281
    MOV ESI,EBX                         ; 004e8283
    TEST EDX,EDX                        ; 004e8285
    JNZ 0x004e8297                      ; 004e8287
        ;   XREF to: 004e8297 (CONDITIONAL_JUMP)  ; LAB_004e8297
    MOV EBX,dword ptr [ESI + 0x4]       ; 004e8289
    TEST EBX,EBX                        ; 004e828c
    JNZ 0x004e82b4                      ; 004e828e
        ;   XREF to: 004e82b4 (CONDITIONAL_JUMP)  ; LAB_004e82b4
    MOV byte ptr [EDI],0x0              ; 004e8290
    POP EDI                             ; 004e8293
    POP ESI                             ; 004e8294
    POP EBX                             ; 004e8295
    RET                                 ; 004e8296
    PUSH EDX                            ; 004e8297
        ;   Label: LAB_004e8297
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004e8298
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004e829d
    MOV dword ptr [EBX],0x0             ; 004e82a0
    MOV EBX,dword ptr [ESI + 0x4]       ; 004e82a6
    TEST EBX,EBX                        ; 004e82a9
    JNZ 0x004e82b4                      ; 004e82ab
        ;   XREF to: 004e82b4 (CONDITIONAL_JUMP)  ; LAB_004e82b4
    MOV byte ptr [EDI],0x0              ; 004e82ad
    POP EDI                             ; 004e82b0
    POP ESI                             ; 004e82b1
    POP EBX                             ; 004e82b2
    RET                                 ; 004e82b3
    PUSH EBX                            ; 004e82b4
        ;   Label: LAB_004e82b4
    CALL crt_memory.c_free_FUN_005638d0 ; 004e82b5
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 004e82ba
    MOV dword ptr [ESI + 0x4],0x0       ; 004e82bd
    MOV byte ptr [EDI],0x0              ; 004e82c4
    POP EDI                             ; 004e82c7
    POP ESI                             ; 004e82c8
    POP EBX                             ; 004e82c9
    RET                                 ; 004e82ca

